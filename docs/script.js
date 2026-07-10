const statusData = [
  {
    id: 'ois_dll',
    filename: 'OIS.DLL',
    iconUrl:
      'data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHdpZHRoPSI2NCIgaGVpZ2h0PSI2NCIgdmlld0JveD0iMCAwIDY0IDY0IiByb2xlPSJpbWciIGFyaWEtbGFiZWw9IkRMTCBpY29uIj48cmVjdCB3aWR0aD0iNjQiIGhlaWdodD0iNjQiIHJ4PSI4IiBmaWxsPSIjMmYzZjc3Ii8+PHRleHQgeD0iMzIiIHk9IjM4IiB0ZXh0LWFuY2hvcj0ibWlkZGxlIiBmb250LWZhbWlseT0iQ29uc29sYXMsIENvdXJpZXIgTmV3LCBtb25vc3BhY2UiIGZvbnQtc2l6ZT0iMTQiIGZpbGw9IiNmNWY3ZmYiPkRMTDwvdGV4dD48L3N2Zz4=',
    implementedCount: 3500,
    totalCount: 4200,
    accuracyPercentage: 85.5,
  },
  {
    id: 'ois_exe',
    filename: 'OIS.EXE',
    iconUrl:
      'data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHdpZHRoPSI2NCIgaGVpZ2h0PSI2NCIgdmlld0JveD0iMCAwIDY0IDY0IiByb2xlPSJpbWciIGFyaWEtbGFiZWw9IkVYRSBpY29uIj48cmVjdCB3aWR0aD0iNjQiIGhlaWdodD0iNjQiIHJ4PSI4IiBmaWxsPSIjN2E0NzMwIi8+PHRleHQgeD0iMzIiIHk9IjM4IiB0ZXh0LWFuY2hvcj0ibWlkZGxlIiBmb250LWZhbWlseT0iQ29uc29sYXMsIENvdXJpZXIgTmV3LCBtb25vc3BhY2UiIGZvbnQtc2l6ZT0iMTQiIGZpbGw9IiNmNWY3ZmYiPkVYRTwvdGV4dD48L3N2Zz4=',
    implementedCount: 150,
    totalCount: 150,
    accuracyPercentage: 99.1,
  },
];

const formatImplementedPercentage = (implementedCount, totalCount) => {
  if (!Number.isFinite(implementedCount) || !Number.isFinite(totalCount) || totalCount <= 0) {
    return '0.00';
  }

  return ((implementedCount / totalCount) * 100).toFixed(2);
};

const makeStatRow = (label, value) => {
  const row = document.createElement('div');
  row.className = 'stat-row';

  const labelNode = document.createElement('span');
  labelNode.className = 'stat-label';
  labelNode.textContent = label;

  const valueNode = document.createElement('span');
  valueNode.className = 'stat-value';
  valueNode.textContent = value;

  row.append(labelNode, valueNode);
  return row;
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

  const implementedPercentage = formatImplementedPercentage(implementedCount, totalCount);
  const numericAccuracy = Number(accuracyPercentage) || 0;
  const accuracyDisplay = numericAccuracy.toFixed(2);
  const boundedAccuracy = Math.max(0, Math.min(100, numericAccuracy));

  const icon = document.createElement('img');
  icon.className = 'status-icon';
  icon.src = iconUrl;
  icon.alt = `${filename} icon`;

  const title = document.createElement('h2');
  title.className = 'status-filename';
  title.textContent = filename;

  const stats = document.createElement('div');
  stats.className = 'status-stats';
  stats.append(
    makeStatRow('Implemented:', `${implementedPercentage}% (${implementedCount}/${totalCount})`),
    makeStatRow('Accuracy:', `${accuracyDisplay}%`),
  );

  const progressBar = document.createElement('div');
  progressBar.className = 'progress-bar';
  progressBar.setAttribute('role', 'progressbar');
  progressBar.setAttribute('aria-label', `${filename} accuracy`);
  progressBar.setAttribute('aria-valuemin', '0');
  progressBar.setAttribute('aria-valuemax', '100');
  progressBar.setAttribute('aria-valuenow', String(boundedAccuracy));

  const progressFill = document.createElement('div');
  progressFill.className = 'progress-fill';
  progressFill.style.width = `${boundedAccuracy}%`;

  const progressText = document.createElement('span');
  progressText.className = 'progress-text';
  progressText.textContent = `${accuracyDisplay}%`;

  progressBar.append(progressFill, progressText);
  card.append(icon, title, stats, progressBar);
  return card;
};

const statusGrid = document.getElementById('status-grid');

if (statusGrid) {
  statusData.forEach((entry) => {
    statusGrid.appendChild(renderStatusCard(entry));
  });
}
