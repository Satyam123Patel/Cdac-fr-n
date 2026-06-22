const REFERENCE_DATE = new Date("2026-04-26T00:00:00+05:30");

const masterRecords = [
  {
    id: "SHOP-1001",
    dept: "Shop Establishment",
    sourceKey: "SE/BLR/560058/1001",
    name: "Mahalakshmi Precision Tools Pvt Ltd",
    address: "Plot 42, 3rd Main, Peenya Industrial Area",
    pin: "560058",
    pan: "AALCM1234P",
    gstin: "29AALCM1234P1Z5",
    sector: "Factory",
  },
  {
    id: "FACT-884",
    dept: "Factories",
    sourceKey: "FAC/KA/884",
    name: "M Lakshmi Precision Tool Private Limited",
    address: "Plot No 42, Peenya Indl Area, 3 Main Road",
    pin: "560058",
    pan: "AALCM1234P",
    gstin: "29AALCM1234P1Z5",
    sector: "Factory",
  },
  {
    id: "LAB-207",
    dept: "Labour",
    sourceKey: "LAB/207/BLRU",
    name: "Mahalakshmi Precision Tools Private Ltd",
    address: "42 3rd Main Peenya Industrial Area Bengaluru",
    pin: "560058",
    pan: "",
    gstin: "29AALCM1234P1Z5",
    sector: "Factory",
  },
  {
    id: "KSPCB-61",
    dept: "KSPCB",
    sourceKey: "PCB/RED/61",
    name: "M.L.P. Tools Pvt. Ltd.",
    address: "Plot 42, Peenya 3rd Main",
    pin: "560058",
    pan: "",
    gstin: "",
    sector: "Factory",
  },
  {
    id: "SHOP-2015",
    dept: "Shop Establishment",
    sourceKey: "SE/BLR/560022/2015",
    name: "Cauvery Foods and Beverages",
    address: "12 Tumkur Road, Yeshwantpur",
    pin: "560022",
    pan: "AAHFC7788N",
    gstin: "29AAHFC7788N1Z2",
    sector: "Food Processing",
  },
  {
    id: "FOOD-419",
    dept: "Food Safety",
    sourceKey: "FSSAI/KA/419",
    name: "Kaveri Food & Beverage",
    address: "No 12, Tumkur Rd, Yeshwanthpur",
    pin: "560022",
    pan: "",
    gstin: "29AAHFC7788N1Z2",
    sector: "Food Processing",
  },
  {
    id: "BESCOM-730",
    dept: "BESCOM",
    sourceKey: "BES/HT/730",
    name: "Cauvery Foods Beverages Unit 1",
    address: "Plot 12 Tumkur Road Yeshwantpur",
    pin: "560022",
    pan: "",
    gstin: "",
    sector: "Food Processing",
  },
  {
    id: "SHOP-4020",
    dept: "Shop Establishment",
    sourceKey: "SE/BLR/560043/4020",
    name: "Nandi Bio Pharma LLP",
    address: "88A Horamavu Main Road",
    pin: "560043",
    pan: "ABCFN9012K",
    gstin: "29ABCFN9012K1Z7",
    sector: "Pharma",
  },
  {
    id: "LAB-611",
    dept: "Labour",
    sourceKey: "LAB/611/EAST",
    name: "Nandi Biopharma",
    address: "88 A Horamavu Main Rd, Bengaluru East",
    pin: "560043",
    pan: "ABCFN9012K",
    gstin: "",
    sector: "Pharma",
  },
  {
    id: "KSPCB-188",
    dept: "KSPCB",
    sourceKey: "PCB/ORANGE/188",
    name: "Nandi Bio Pharma",
    address: "88-A Horamavu Main Road",
    pin: "560043",
    pan: "",
    gstin: "",
    sector: "Pharma",
  },
  {
    id: "FACT-991",
    dept: "Factories",
    sourceKey: "FAC/KA/991",
    name: "Sri Basaveshwara Textiles",
    address: "7 Magadi Road Industrial Estate",
    pin: "560023",
    pan: "AAXFS4411D",
    gstin: "29AAXFS4411D1Z4",
    sector: "Textiles",
  },
  {
    id: "LAB-912",
    dept: "Labour",
    sourceKey: "LAB/912/WEST",
    name: "Shree Basaveshwar Textile Works",
    address: "Plot 7, Magadi Rd Industrial Estate",
    pin: "560023",
    pan: "",
    gstin: "",
    sector: "Textiles",
  },
  {
    id: "SHOP-918",
    dept: "Shop Establishment",
    sourceKey: "SE/BLR/560058/918",
    name: "Bengaluru Metal Works",
    address: "Plot 4, 2nd Cross, Peenya",
    pin: "560058",
    pan: "AAIFB4490P",
    gstin: "29AAIFB4490P1Z9",
    sector: "Factory",
  },
  {
    id: "FACT-512",
    dept: "Factories",
    sourceKey: "FAC/KA/512",
    name: "Bangalore Metal Work LLP",
    address: "No 4, Peenya 2 Cross",
    pin: "560058",
    pan: "",
    gstin: "",
    sector: "Factory",
  },
  {
    id: "KSPCB-513",
    dept: "KSPCB",
    sourceKey: "PCB/GREEN/513",
    name: "Bangalore Metal Works",
    address: "Plot 14, 2nd Cross, Peenya Industrial Area",
    pin: "560058",
    pan: "",
    gstin: "",
    sector: "Factory",
  },
];

const activityEvents = [
  {
    id: "EVT-001",
    sourceDept: "Factories",
    sourceRecordId: "FACT-884",
    date: "2026-03-15",
    type: "Inspection",
    signal: "recent_compliance",
    value: "Passed safety inspection",
    notes: "Machine guarding and worker safety records verified.",
  },
  {
    id: "EVT-002",
    sourceDept: "BESCOM",
    sourceRecordId: "",
    gstin: "29AALCM1234P1Z5",
    date: "2026-04-02",
    type: "Consumption",
    signal: "active_consumption",
    value: "42,800 kWh",
    notes: "Sustained HT consumption above peer median.",
  },
  {
    id: "EVT-003",
    sourceDept: "Labour",
    sourceRecordId: "LAB-207",
    date: "2026-01-18",
    type: "Return Filing",
    signal: "recent_filing",
    value: "Annual labour return filed",
    notes: "Filing includes 64 active workers.",
  },
  {
    id: "EVT-004",
    sourceDept: "Food Safety",
    sourceRecordId: "FOOD-419",
    date: "2025-06-10",
    type: "License Renewal",
    signal: "renewal",
    value: "FSSAI renewed until 2026-06-09",
    notes: "Renewed through Food Safety portal.",
  },
  {
    id: "EVT-005",
    sourceDept: "BESCOM",
    sourceRecordId: "BESCOM-730",
    date: "2026-04-05",
    type: "Consumption",
    signal: "active_consumption",
    value: "18,400 kWh",
    notes: "Normal seasonal production load.",
  },
  {
    id: "EVT-006",
    sourceDept: "Shop Establishment",
    sourceRecordId: "SHOP-4020",
    date: "2024-11-12",
    type: "Renewal",
    signal: "stale_renewal",
    value: "Last renewal older than 12 months",
    notes: "No renewal seen in current financial year.",
  },
  {
    id: "EVT-007",
    sourceDept: "KSPCB",
    sourceRecordId: "KSPCB-188",
    date: "2025-01-06",
    type: "Consent",
    signal: "stale_consent",
    value: "Consent expired",
    notes: "No subsequent consent event in stream.",
  },
  {
    id: "EVT-008",
    sourceDept: "Factories",
    sourceRecordId: "FACT-991",
    date: "2025-08-04",
    type: "Closure",
    signal: "closure",
    value: "Factory closure intimation accepted",
    notes: "Operations stated to have stopped on 2025-07-31.",
  },
  {
    id: "EVT-009",
    sourceDept: "Labour",
    sourceRecordId: "LAB-912",
    date: "2025-09-15",
    type: "Worker Return",
    signal: "zero_workers",
    value: "0 workers reported",
    notes: "Supports closed classification.",
  },
  {
    id: "EVT-010",
    sourceDept: "BESCOM",
    sourceRecordId: "SHOP-918",
    date: "2026-02-02",
    type: "Consumption",
    signal: "active_consumption",
    value: "9,600 kWh",
    notes: "Meter mapped from Shop Establishment record identifier.",
  },
  {
    id: "EVT-011",
    sourceDept: "KSPCB",
    sourceRecordId: "KSPCB-513",
    date: "2025-10-21",
    type: "Inspection",
    signal: "inspection",
    value: "Inspection notice issued",
    notes: "Address ambiguity requires reviewer confirmation before merge.",
  },
  {
    id: "EVT-012",
    sourceDept: "BESCOM",
    sourceRecordId: "",
    date: "2026-03-11",
    type: "Consumption",
    signal: "unmatched",
    value: "3,300 kWh",
    name: "Sri Lakshmi Fabricators",
    address: "Peenya 5th Cross",
    pin: "560058",
    notes: "No confident UBID join. Needs record review.",
  },
];

const state = {
  autoThreshold: 0.9,
  reviewThreshold: 0.68,
  reviewed: {},
  activeUbid: "",
  lastResolution: null,
};

const stopWords = new Set([
  "and",
  "the",
  "pvt",
  "private",
  "limited",
  "ltd",
  "llp",
  "company",
  "co",
  "unit",
  "no",
  "plot",
  "road",
  "rd",
  "main",
  "cross",
  "bengaluru",
  "bangalore",
]);

function normalizeText(value) {
  return String(value || "")
    .toLowerCase()
    .replace(/&/g, " and ")
    .replace(/[^a-z0-9\s]/g, " ")
    .replace(/\s+/g, " ")
    .trim();
}

function tokens(value, keepStopWords = false) {
  return normalizeText(value)
    .split(" ")
    .filter(Boolean)
    .filter((token) => keepStopWords || !stopWords.has(token));
}

function tokenSet(value, keepStopWords = false) {
  return new Set(tokens(value, keepStopWords));
}

function jaccard(aTokens, bTokens) {
  if (!aTokens.size && !bTokens.size) return 0;
  let intersection = 0;
  for (const item of aTokens) {
    if (bTokens.has(item)) intersection += 1;
  }
  const union = new Set([...aTokens, ...bTokens]).size;
  return union ? intersection / union : 0;
}

function charNgrams(value, size = 3) {
  const text = normalizeText(value).replace(/\s/g, "");
  const grams = new Set();
  for (let i = 0; i <= text.length - size; i += 1) {
    grams.add(text.slice(i, i + size));
  }
  return grams;
}

function similarity(a, b) {
  const tokenScore = jaccard(tokenSet(a), tokenSet(b));
  const charScore = jaccard(charNgrams(a), charNgrams(b));
  return Number((tokenScore * 0.7 + charScore * 0.3).toFixed(3));
}

function pairKey(a, b) {
  return [a.id, b.id].sort().join("::");
}

function compareRecords(a, b) {
  const key = pairKey(a, b);
  const reviewed = state.reviewed[key];
  const gstExact = Boolean(a.gstin && b.gstin && a.gstin === b.gstin);
  const panExact = Boolean(a.pan && b.pan && a.pan === b.pan);
  const nameScore = similarity(a.name, b.name);
  const addressScore = similarity(a.address, b.address);
  const pinScore = a.pin && b.pin && a.pin === b.pin ? 1 : 0;
  const sectorScore = a.sector === b.sector ? 1 : 0;

  let score;
  if (gstExact) {
    score = 0.98;
  } else if (panExact) {
    score = 0.93 + nameScore * 0.04 + addressScore * 0.02 + pinScore * 0.01;
  } else {
    score = nameScore * 0.48 + addressScore * 0.31 + pinScore * 0.13 + sectorScore * 0.08;
  }

  if (reviewed === "accepted") score = Math.max(score, 0.93);
  if (reviewed === "rejected") score = Math.min(score, 0.2);

  score = Math.min(0.99, Number(score.toFixed(3)));

  const reasons = [];
  if (gstExact) reasons.push("GSTIN exact anchor");
  if (panExact) reasons.push("PAN exact anchor");
  if (!gstExact && !panExact && nameScore >= 0.72) reasons.push("strong name similarity");
  if (addressScore >= 0.62) reasons.push("address and locality align");
  if (pinScore) reasons.push("same PIN code");
  if (reviewed === "accepted") reasons.push("accepted by reviewer");
  if (reviewed === "rejected") reasons.push("rejected by reviewer");
  if (!reasons.length) reasons.push("weak evidence only");

  let decision = "reject";
  if (reviewed === "accepted") decision = "auto-link";
  else if (reviewed === "rejected") decision = "reject";
  else if (score >= state.autoThreshold) decision = "auto-link";
  else if (score >= state.reviewThreshold) decision = "review";

  return {
    key,
    a,
    b,
    score,
    decision,
    nameScore,
    addressScore,
    pinScore,
    sectorScore,
    gstExact,
    panExact,
    reasons,
  };
}

class UnionFind {
  constructor(items) {
    this.parent = new Map(items.map((item) => [item, item]));
  }

  find(item) {
    const parent = this.parent.get(item);
    if (parent === item) return item;
    const root = this.find(parent);
    this.parent.set(item, root);
    return root;
  }

  union(a, b) {
    const rootA = this.find(a);
    const rootB = this.find(b);
    if (rootA !== rootB) this.parent.set(rootB, rootA);
  }
}

function resolveBusinesses() {
  const pairs = [];
  for (let i = 0; i < masterRecords.length; i += 1) {
    for (let j = i + 1; j < masterRecords.length; j += 1) {
      pairs.push(compareRecords(masterRecords[i], masterRecords[j]));
    }
  }

  pairs.sort((a, b) => b.score - a.score);
  const uf = new UnionFind(masterRecords.map((record) => record.id));
  for (const candidate of pairs) {
    if (candidate.decision === "auto-link") {
      uf.union(candidate.a.id, candidate.b.id);
    }
  }

  const clusters = new Map();
  for (const record of masterRecords) {
    const root = uf.find(record.id);
    if (!clusters.has(root)) clusters.set(root, []);
    clusters.get(root).push(record);
  }

  const sortedClusters = [...clusters.values()].sort((a, b) => {
    const left = clusterLabel(a);
    const right = clusterLabel(b);
    return left.localeCompare(right);
  });

  const ubidByRecord = new Map();
  const businesses = sortedClusters.map((records, index) => {
    const anchor = getClusterAnchor(records);
    const ubid = anchor
      ? `UBID-KA-${anchor.slice(-5).replace(/[^A-Z0-9]/g, "")}`
      : `UBID-KA-SYN-${String(index + 1).padStart(4, "0")}`;
    for (const record of records) ubidByRecord.set(record.id, ubid);
    return {
      ubid,
      anchor,
      records,
      name: clusterLabel(records),
      pin: mostCommon(records.map((record) => record.pin)),
      sector: mostCommon(records.map((record) => record.sector)),
    };
  });

  const resolution = {
    pairs,
    businesses,
    ubidByRecord,
    summary: {
      auto: pairs.filter((pair) => pair.decision === "auto-link").length,
      review: pairs.filter((pair) => pair.decision === "review").length,
      reject: pairs.filter((pair) => pair.decision === "reject").length,
    },
  };

  state.lastResolution = resolution;
  return resolution;
}

function getClusterAnchor(records) {
  const gstin = records.find((record) => record.gstin)?.gstin;
  if (gstin) return gstin;
  const pan = records.find((record) => record.pan)?.pan;
  return pan || "";
}

function clusterLabel(records) {
  const withAnchor = records.find((record) => record.gstin || record.pan);
  return (withAnchor || records[0]).name;
}

function mostCommon(values) {
  const counts = new Map();
  for (const value of values.filter(Boolean)) {
    counts.set(value, (counts.get(value) || 0) + 1);
  }
  return [...counts.entries()].sort((a, b) => b[1] - a[1])[0]?.[0] || "";
}

function joinEvents(resolution) {
  const joined = [];
  const unmatched = [];

  for (const event of activityEvents) {
    let best = null;
    if (event.sourceRecordId && resolution.ubidByRecord.has(event.sourceRecordId)) {
      best = {
        ubid: resolution.ubidByRecord.get(event.sourceRecordId),
        confidence: 0.96,
        method: "source record identifier",
      };
    }

    if (!best && event.gstin) {
      const record = masterRecords.find((item) => item.gstin === event.gstin);
      if (record) {
        best = {
          ubid: resolution.ubidByRecord.get(record.id),
          confidence: 0.95,
          method: "GSTIN anchor",
        };
      }
    }

    if (!best && event.pan) {
      const record = masterRecords.find((item) => item.pan === event.pan);
      if (record) {
        best = {
          ubid: resolution.ubidByRecord.get(record.id),
          confidence: 0.92,
          method: "PAN anchor",
        };
      }
    }

    if (!best && event.name) {
      const scored = masterRecords
        .map((record) => ({
          record,
          score:
            similarity(record.name, event.name) * 0.54 +
            similarity(record.address, event.address) * 0.3 +
            (record.pin === event.pin ? 0.16 : 0),
        }))
        .sort((a, b) => b.score - a.score)[0];
      if (scored && scored.score >= state.reviewThreshold) {
        best = {
          ubid: resolution.ubidByRecord.get(scored.record.id),
          confidence: Number(scored.score.toFixed(2)),
          method: "name-address similarity",
        };
      }
    }

    if (best) {
      joined.push({ ...event, ...best });
    } else {
      unmatched.push({ ...event, confidence: 0.31, method: "below review threshold" });
    }
  }

  return { joined, unmatched };
}

function classifyBusinesses(resolution) {
  const { joined, unmatched } = joinEvents(resolution);
  const byUbid = new Map();
  for (const business of resolution.businesses) byUbid.set(business.ubid, []);
  for (const event of joined) {
    if (!byUbid.has(event.ubid)) byUbid.set(event.ubid, []);
    byUbid.get(event.ubid).push(event);
  }

  const statuses = resolution.businesses.map((business) => {
    const events = (byUbid.get(business.ubid) || []).sort((a, b) => new Date(b.date) - new Date(a.date));
    const latest = events[0];
    const daysSinceLatest = latest ? daysBetween(latest.date, REFERENCE_DATE) : 9999;
    const hasClosure = events.some((event) => event.signal === "closure" || /closure/i.test(event.type));
    const hasZeroWorkers = events.some((event) => event.signal === "zero_workers");
    const recentActive = events.some(
      (event) =>
        ["recent_compliance", "active_consumption", "recent_filing", "renewal"].includes(event.signal) &&
        daysBetween(event.date, REFERENCE_DATE) <= 210,
    );
    const staleSignals = events.filter((event) => ["stale_renewal", "stale_consent"].includes(event.signal));

    let status = "Dormant";
    let score = 68;
    const reasons = [];

    if (hasClosure) {
      status = "Closed";
      score = hasZeroWorkers ? 94 : 88;
      reasons.push("Closure event found in department stream.");
      if (hasZeroWorkers) reasons.push("Labour return reports zero workers after closure.");
    } else if (recentActive) {
      status = "Active";
      score = 86;
      reasons.push("Recent operational signal within the review window.");
      if (events.some((event) => event.signal === "active_consumption")) {
        reasons.push("BESCOM consumption indicates ongoing activity.");
      }
      if (events.some((event) => event.type === "Inspection")) {
        reasons.push("Inspection or compliance activity is linked to the UBID.");
      }
    } else {
      status = "Dormant";
      score = staleSignals.length ? 79 : 64;
      reasons.push("No strong activity signal in the recent window.");
      if (staleSignals.length) reasons.push("Renewal or consent evidence is stale.");
      if (daysSinceLatest > 270) reasons.push("Latest linked event is older than 270 days.");
    }

    return {
      ...business,
      status,
      score,
      reasons,
      events,
      latestEvent: latest,
    };
  });

  return { statuses, joined, unmatched };
}

function daysBetween(dateValue, endDate) {
  const start = new Date(`${dateValue}T00:00:00+05:30`);
  return Math.round((endDate - start) / (1000 * 60 * 60 * 24));
}

function formatDate(dateValue) {
  return new Intl.DateTimeFormat("en-IN", {
    day: "2-digit",
    month: "short",
    year: "numeric",
  }).format(new Date(`${dateValue}T00:00:00+05:30`));
}

function moneylessNumber(value) {
  return new Intl.NumberFormat("en-IN").format(value);
}

function escapeHtml(value) {
  return String(value ?? "")
    .replace(/&/g, "&amp;")
    .replace(/</g, "&lt;")
    .replace(/>/g, "&gt;")
    .replace(/"/g, "&quot;")
    .replace(/'/g, "&#039;");
}

function render() {
  const resolution = resolveBusinesses();
  const activity = classifyBusinesses(resolution);
  renderMetrics(resolution, activity);
  renderResolutionBars(resolution);
  renderActivityDonut(activity.statuses);
  renderRecords(resolution);
  renderCandidates(resolution);
  renderReviewQueue(resolution);
  renderActivity(resolution, activity);
  renderQueries(activity);
  renderSubmissionCopy();
}

function renderMetrics(resolution, activity) {
  const committedPairs = resolution.summary.auto;
  const pendingReview = resolution.summary.review;
  const metrics = [
    {
      label: "Source records",
      value: masterRecords.length,
      note: "from Shop, Factories, Labour, KSPCB, BESCOM, Food Safety",
    },
    {
      label: "UBIDs created",
      value: resolution.businesses.length,
      note: `${committedPairs} high-confidence link decisions committed`,
    },
    {
      label: "Reviewer queue",
      value: pendingReview,
      note: "ambiguous links held before merge",
    },
    {
      label: "Unmatched events",
      value: activity.unmatched.length,
      note: "not dropped, routed for review",
    },
  ];

  document.getElementById("metric-grid").innerHTML = metrics
    .map(
      (metric) => `
        <div class="metric">
          <span>${escapeHtml(metric.label)}</span>
          <strong>${moneylessNumber(metric.value)}</strong>
          <p>${escapeHtml(metric.note)}</p>
        </div>
      `,
    )
    .join("");
}

function renderResolutionBars(resolution) {
  const total = resolution.pairs.length;
  const rows = [
    ["Auto-linked", resolution.summary.auto, "auto"],
    ["Needs review", resolution.summary.review, "review"],
    ["Kept separate", resolution.summary.reject, "reject"],
  ];
  document.getElementById("resolution-bars").innerHTML = rows
    .map(([label, value, cls]) => {
      const pct = total ? Math.round((value / total) * 100) : 0;
      return `
        <div class="bar-row">
          <strong>${label}</strong>
          <div class="bar-track"><div class="bar-fill ${cls}" style="width: ${pct}%"></div></div>
          <span>${pct}%</span>
        </div>
      `;
    })
    .join("");
}

function renderActivityDonut(statuses) {
  const counts = {
    Active: statuses.filter((item) => item.status === "Active").length,
    Dormant: statuses.filter((item) => item.status === "Dormant").length,
    Closed: statuses.filter((item) => item.status === "Closed").length,
  };
  const total = statuses.length || 1;
  const activeDeg = (counts.Active / total) * 360;
  const dormantDeg = activeDeg + (counts.Dormant / total) * 360;
  const donut = document.getElementById("activity-donut");
  donut.style.background = `conic-gradient(var(--green) 0deg ${activeDeg}deg, var(--amber) ${activeDeg}deg ${dormantDeg}deg, var(--red) ${dormantDeg}deg 360deg)`;
  donut.dataset.label = `${statuses.length} UBIDs`;

  const legend = [
    ["Active", counts.Active, "var(--green)"],
    ["Dormant", counts.Dormant, "var(--amber)"],
    ["Closed", counts.Closed, "var(--red)"],
  ];
  document.getElementById("activity-legend").innerHTML = legend
    .map(
      ([label, value, color]) => `
        <div class="legend-row">
          <span><i class="swatch" style="background:${color}"></i>${label}</span>
          <strong>${value}</strong>
        </div>
      `,
    )
    .join("");
}

function renderRecords(resolution) {
  document.getElementById("records-table").innerHTML = masterRecords
    .map((record) => {
      const ubid = resolution.ubidByRecord.get(record.id);
      return `
        <tr>
          <td><strong>${escapeHtml(record.id)}</strong><br><span class="muted">${escapeHtml(record.sourceKey)}</span></td>
          <td><span class="dept-pill">${escapeHtml(record.dept)}</span></td>
          <td>${escapeHtml(record.name)}<br><span class="muted">${escapeHtml(record.address)}</span></td>
          <td>${escapeHtml(record.pin)}</td>
          <td>${escapeHtml(record.pan || "PAN missing")}<br><span class="muted">${escapeHtml(record.gstin || "GSTIN missing")}</span></td>
          <td><strong>${escapeHtml(ubid)}</strong></td>
        </tr>
      `;
    })
    .join("");
}

function renderCandidates(resolution) {
  const candidates = resolution.pairs
    .filter((pair) => pair.decision !== "reject" || pair.score > 0.5)
    .slice(0, 14);

  document.getElementById("candidate-list").innerHTML = candidates
    .map(
      (candidate) => `
        <article class="candidate">
          <div class="candidate-head">
            <div>
              <h4>${escapeHtml(candidate.a.id)} + ${escapeHtml(candidate.b.id)}</h4>
              <p class="pair-text">${escapeHtml(candidate.a.name)} / ${escapeHtml(candidate.b.name)}</p>
            </div>
            <span class="decision-pill ${candidate.decision}">${candidate.decision.replace("-", " ")}</span>
          </div>
          <div class="evidence-grid">
            ${evidenceCell("Confidence", candidate.score.toFixed(3))}
            ${evidenceCell("Name", candidate.nameScore.toFixed(2))}
            ${evidenceCell("Address", candidate.addressScore.toFixed(2))}
            ${evidenceCell("Anchor", candidate.gstExact ? "GSTIN" : candidate.panExact ? "PAN" : "None")}
          </div>
          <p class="pair-text">${escapeHtml(candidate.reasons.join(", "))}</p>
        </article>
      `,
    )
    .join("");
}

function evidenceCell(label, value) {
  return `
    <div class="evidence">
      <span>${escapeHtml(label)}</span>
      <strong>${escapeHtml(value)}</strong>
    </div>
  `;
}

function renderReviewQueue(resolution) {
  const queue = resolution.pairs.filter((pair) => pair.decision === "review");
  document.getElementById("review-count").textContent = `${queue.length} pending`;
  const container = document.getElementById("review-queue");
  renderReviewAudit(resolution);

  if (!queue.length) {
    container.innerHTML = `
      <div class="review-item">
        <h4>No ambiguous matches are pending.</h4>
        <p class="pair-text">Lower the review floor in UBID Linking to see more borderline cases, or accept/reject the current queue to update calibration.</p>
      </div>
    `;
    return;
  }

  container.innerHTML = queue
    .map(
      (item) => `
        <article class="review-item">
          <div class="review-head">
            <div>
              <h4>${escapeHtml(item.a.name)} <-> ${escapeHtml(item.b.name)}</h4>
              <p class="pair-text">${escapeHtml(item.a.dept)} ${escapeHtml(item.a.id)} / ${escapeHtml(item.b.dept)} ${escapeHtml(item.b.id)}</p>
            </div>
            <span class="decision-pill review">${item.score.toFixed(3)}</span>
          </div>
          <div class="evidence-grid">
            ${evidenceCell("Name match", item.nameScore.toFixed(2))}
            ${evidenceCell("Address match", item.addressScore.toFixed(2))}
            ${evidenceCell("Same PIN", item.pinScore ? "Yes" : "No")}
            ${evidenceCell("Sector", item.sectorScore ? "Aligned" : "Different")}
          </div>
          <p class="pair-text">${escapeHtml(item.reasons.join(", "))}</p>
          <div class="review-actions">
            <button class="secondary-action" data-review="${escapeHtml(item.key)}" data-outcome="accepted">Accept Match</button>
            <button class="danger-action" data-review="${escapeHtml(item.key)}" data-outcome="rejected">Keep Separate</button>
          </div>
        </article>
      `,
    )
    .join("");
}

function renderReviewAudit(resolution) {
  const audited = Object.entries(state.reviewed).map(([key, outcome]) => {
    const pair = resolution.pairs.find((item) => item.key === key);
    return { key, outcome, pair };
  });

  document.getElementById("review-audit").innerHTML = audited.length
    ? audited
        .map(({ outcome, pair, key }) => {
          const label = pair ? `${pair.a.id} and ${pair.b.id}` : key;
          const detail =
            outcome === "accepted"
              ? "Committed into the UBID cluster and used as future calibration evidence."
              : "Blocked from automatic merge and retained as a separate business unless later reversed.";
          return `
            <div class="timeline-item">
              <div class="timeline-date">Now</div>
              <div>
                <strong>${escapeHtml(outcome)} - ${escapeHtml(label)}</strong>
                <p class="pair-text">${escapeHtml(detail)}</p>
              </div>
            </div>
          `;
        })
        .join("")
    : `<div class="event-card">No reviewer decisions yet. Accept or reject a queue item to create auditable feedback.</div>`;
}

function renderActivity(resolution, activity) {
  const statuses = activity.statuses;
  if (!state.activeUbid || !statuses.some((item) => item.ubid === state.activeUbid)) {
    state.activeUbid = statuses[0]?.ubid || "";
  }

  document.getElementById("ubid-picker").innerHTML = statuses
    .map((business) => `<option value="${escapeHtml(business.ubid)}">${escapeHtml(business.ubid)} - ${escapeHtml(business.name)}</option>`)
    .join("");
  document.getElementById("ubid-picker").value = state.activeUbid;

  const selected = statuses.find((item) => item.ubid === state.activeUbid) || statuses[0];
  if (!selected) return;

  document.getElementById("selected-business-meta").textContent = `${selected.records.length} source records - ${selected.sector} - PIN ${selected.pin}`;
  document.getElementById("selected-status").innerHTML = `
    <div class="status-main">
      <div class="status-score">${selected.score}</div>
      <div>
        <span class="status-pill ${selected.status}">${selected.status}</span>
        <h3>${escapeHtml(selected.name)}</h3>
        <p class="pair-text">${escapeHtml(selected.ubid)} - Anchor: ${escapeHtml(selected.anchor || "internal synthetic ID")}</p>
      </div>
    </div>
    <ul class="reason-list">
      ${selected.reasons.map((reason) => `<li>${escapeHtml(reason)}</li>`).join("")}
    </ul>
  `;

  document.getElementById("event-timeline").innerHTML = selected.events.length
    ? selected.events
        .map(
          (event) => `
            <div class="timeline-item">
              <div class="timeline-date">${formatDate(event.date)}</div>
              <div>
                <strong>${escapeHtml(event.type)} - ${escapeHtml(event.sourceDept)}</strong>
                <p class="pair-text">${escapeHtml(event.value)}. ${escapeHtml(event.notes)}</p>
                <p class="pair-text">Joined by ${escapeHtml(event.method)} with confidence ${event.confidence}</p>
              </div>
            </div>
          `,
        )
        .join("")
    : `<div class="event-card">No linked event signals. This UBID remains Dormant until activity is reviewed or received.</div>`;

  document.getElementById("unmatched-events").innerHTML = activity.unmatched
    .map(
      (event) => `
        <div class="event-card">
          <strong>${escapeHtml(event.id)} - ${escapeHtml(event.type)}</strong>
          <p class="pair-text">${escapeHtml(event.name || "Name missing")} - ${escapeHtml(event.pin || "PIN missing")}</p>
          <p class="pair-text">${escapeHtml(event.notes)}</p>
        </div>
      `,
    )
    .join("");
}

function renderQueries(activity) {
  const run = () => {
    const status = document.getElementById("query-status").value;
    const sector = document.getElementById("query-sector").value;
    const pin = document.getElementById("query-pin").value;
    const inspectionGap = Number(document.getElementById("query-inspection").value);
    const results = activity.statuses.filter((business) => {
      if (business.status !== status) return false;
      if (sector !== "Any" && business.sector !== sector) return false;
      if (pin !== "Any" && business.pin !== pin) return false;
      if (inspectionGap > 0) {
        const lastInspection = business.events
          .filter((event) => /inspection/i.test(event.type))
          .sort((a, b) => new Date(b.date) - new Date(a.date))[0];
        if (lastInspection && daysBetween(lastInspection.date, REFERENCE_DATE) <= inspectionGap * 30) return false;
      }
      return true;
    });

    document.getElementById("query-title").textContent = `${results.length} result${results.length === 1 ? "" : "s"}`;
    document.getElementById("query-subtitle").textContent =
      `${status} businesses` +
      `${sector !== "Any" ? ` in ${sector}` : ""}` +
      `${pin !== "Any" ? `, PIN ${pin}` : ""}` +
      `${inspectionGap > 0 ? `, no inspection in ${inspectionGap} months` : ""}`;

    document.getElementById("query-results").innerHTML = results.length
      ? results
          .map((business) => {
            const sourceIds = business.records.map((record) => record.id).join(", ");
            const lastEvent = business.latestEvent ? `${business.latestEvent.type} on ${formatDate(business.latestEvent.date)}` : "No linked events";
            return `
              <article class="query-card">
                <div class="query-card-head">
                  <div>
                    <h4>${escapeHtml(business.name)}</h4>
                    <p class="pair-text">${escapeHtml(business.ubid)} - ${escapeHtml(sourceIds)}</p>
                  </div>
                  <span class="status-pill ${business.status}">${business.status}</span>
                </div>
                <div class="evidence-grid">
                  ${evidenceCell("PIN", business.pin)}
                  ${evidenceCell("Sector", business.sector)}
                  ${evidenceCell("Confidence", String(business.score))}
                  ${evidenceCell("Latest event", lastEvent)}
                </div>
              </article>
            `;
          })
          .join("")
      : `<div class="query-card">No UBIDs match this query under the current thresholds. Change the filters or review pending ambiguous matches.</div>`;
  };

  run();
}

function renderSubmissionCopy() {
  document.getElementById("submission-copy").textContent = `Theme: Theme 1 - Unified Business Identifier (UBID) and Active Business Intelligence by Karnataka Commerce & Industry

VyaparaSetu is an execution-first UBID and Active Business Intelligence layer for Karnataka's business-facing departments. It works beside existing systems instead of replacing them. The prototype ingests synthetic master data from Shop Establishment, Factories, Labour, KSPCB, Food Safety, and BESCOM-like sources, links records that refer to the same real-world business, assigns a single UBID, and classifies each UBID as Active, Dormant, or Closed from one-way activity streams.

Core approach:
- Entity resolution uses central anchors first: exact GSTIN/PAN matches are high-confidence joins. When identifiers are missing, the engine combines normalized business name, address/locality, PIN, sector, and source-system evidence.
- Every candidate link receives an explainable confidence score. High-confidence matches are auto-committed, ambiguous matches enter a reviewer queue, and low-confidence records stay separate.
- Reviewer decisions are captured as training/calibration signals. Accepted matches become committed evidence, rejected matches are blocked from future silent merging, and the model can be recalibrated as more reviewed pairs accumulate.
- Activity intelligence joins inspections, renewals, filings, compliance events, and consumption signals to UBIDs using source IDs, PAN/GSTIN anchors, or explainable similarity. Unmatched events are surfaced for review rather than dropped.
- Status classification remains explainable: Active, Dormant, or Closed verdicts show the exact event signals, dates, source department, join confidence, and time window behind the decision.

Architecture:
1. Connectors ingest scrambled or synthetic snapshots and one-way event feeds from departments without changing source systems.
2. A canonical staging layer normalizes names, addresses, identifiers, and event fields.
3. The UBID resolution service performs deterministic blocking, similarity scoring, thresholding, and reviewer workflow.
4. The activity intelligence service joins events to UBIDs and produces evidence-backed status.
5. An audit store records every link, reject, status verdict, reviewer edit, and reversal.
6. A government dashboard supports lookup by department ID, PAN/GSTIN, name/address/PIN, reviewer work queues, status timelines, and operational queries such as "active factories in PIN 560058 with no inspection in the last 18 months."

Non-negotiables addressed:
- No source department system is modified.
- Real data is not required; the demo runs on deterministic synthetic data and is designed for scrambled sandbox inputs.
- Raw PII is not sent to hosted LLMs. The current prototype is deterministic and explainable; optional LLM use would be limited to synthetic/scrambled reviewer summaries only.
- Wrong merges are treated as high-risk: ambiguous cases require human review and all automated decisions are reversible and auditable.

Round 2 implementation plan:
Week 1: finalize synthetic/sandbox schemas, build connectors, define canonical fields, and implement deterministic blocking keys.
Week 2: implement UBID resolution service, confidence calibration, and reviewer queue.
Week 3: implement activity-event joining, Active/Dormant/Closed classification, evidence timelines, and unmatched-event review.
Week 4: harden audit logs, add lookup APIs, demonstrate government queries, and prepare deployment documentation.

The included prototype demonstrates the end-to-end workflow today: synthetic records become UBIDs, ambiguous matches are reviewed, activity events produce explainable statuses, and decision-makers can run evidence-backed queries that are impossible with isolated department databases.`;
}

function bindEvents() {
  document.querySelectorAll(".nav-item").forEach((button) => {
    button.addEventListener("click", () => {
      document.querySelectorAll(".nav-item").forEach((item) => item.classList.remove("active"));
      document.querySelectorAll(".view").forEach((view) => view.classList.remove("active"));
      button.classList.add("active");
      document.getElementById(button.dataset.view).classList.add("active");
    });
  });

  document.getElementById("auto-threshold").addEventListener("input", (event) => {
    state.autoThreshold = Number(event.target.value);
    document.getElementById("auto-value").textContent = state.autoThreshold.toFixed(2);
    render();
  });

  document.getElementById("review-threshold").addEventListener("input", (event) => {
    state.reviewThreshold = Number(event.target.value);
    document.getElementById("review-value").textContent = state.reviewThreshold.toFixed(2);
    render();
  });

  document.getElementById("rerun-resolution").addEventListener("click", render);
  document.getElementById("ubid-picker").addEventListener("change", (event) => {
    state.activeUbid = event.target.value;
    render();
  });

  document.getElementById("run-query").addEventListener("click", () => {
    const resolution = resolveBusinesses();
    renderQueries(classifyBusinesses(resolution));
  });

  document.getElementById("review-queue").addEventListener("click", (event) => {
    const button = event.target.closest("[data-review]");
    if (!button) return;
    state.reviewed[button.dataset.review] = button.dataset.outcome;
    render();
  });
}

bindEvents();
render();
