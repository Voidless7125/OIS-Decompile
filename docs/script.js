const toBase64 = (value) => {
  if (typeof btoa === 'function') {
    return btoa(value);
  }

  return Buffer.from(value, 'utf8').toString('base64');
};

const svgPlaceholder = (label, bgColor) => {
  const svg = `<svg xmlns="http://www.w3.org/2000/svg" width="64" height="64" viewBox="0 0 64 64" role="img" aria-label="${label} icon"><rect width="64" height="64" rx="8" fill="${bgColor}"/><text x="32" y="38" text-anchor="middle" font-family="Consolas, Courier New, monospace" font-size="14" fill="#f5f7ff">${label}</text></svg>`;
  return `data:image/svg+xml;base64,${toBase64(svg)}`;
};

const statusData = [
  {
    id: 'ois_dll',
    filename: 'OIS.DLL',
    iconUrl: svgPlaceholder('DLL', '#2f3f77'),
    implementedCount: 3500,
    totalCount: 4200,
    accuracyPercentage: 85.5,
  },
  {
    id: 'ois_exe',
    filename: 'OIS.EXE',
    iconUrl: svgPlaceholder('EXE', '#7a4730'),
    implementedCount: 150,
    totalCount: 150,
    accuracyPercentage: 99.1,
  },
];

const calculateImplementedPercentage = (implementedCount, totalCount) => {
  if (!Number.isFinite(totalCount) || totalCount <= 0) {
    return '0.00';
  }

  return ((implementedCount / totalCount) * 100).toFixed(2);
};

const renderStatusCard = ({
  id,
  filename,
  iconUrl,
  implementedCount,
  totalCount,
  accuracyPercentage,
}) => {
  const card = document.createElement('article');
  card.className = 'status-card';
  card.id = id;

  const implementedPercentage = calculateImplementedPercentage(implementedCount, totalCount);
  const accuracyDisplay = Number(accuracyPercentage).toFixed(2);

  card.innerHTML = `
    <img class="status-icon" src="${iconUrl}" alt="${filename} icon" />
    <h2 class="status-filename">${filename}</h2>
    <div class="status-stats">
      <div class="stat-row">
        <span class="stat-label">Implemented:</span>
        <span class="stat-value">${implementedPercentage}% (${implementedCount}/${totalCount})</span>
      </div>
      <div class="stat-row">
        <span class="stat-label">Accuracy:</span>
        <span class="stat-value">${accuracyDisplay}%</span>
      </div>
    </div>
    <div class="progress-bar" role="img" aria-label="${filename} accuracy ${accuracyDisplay}%">
      <div class="progress-fill" style="width: ${Math.max(0, Math.min(100, accuracyPercentage))}%;"></div>
      <span class="progress-text">${accuracyDisplay}%</span>
    </div>
  `;

  return card;
};

const statusGrid = document.getElementById('status-grid');
statusData.map(renderStatusCard).forEach((card) => statusGrid.appendChild(card));
