# VyaparaSetu UBID Intelligence

Theme 1 prototype for AI for Bharat: Unified Business Identifier and Active Business Intelligence by Karnataka Commerce & Industry.

## What It Demonstrates

- Synthetic master data from multiple department systems.
- Explainable entity resolution using GSTIN/PAN anchors, normalized name similarity, address similarity, PIN, and sector.
- Automatic UBID assignment for high-confidence matches.
- Human reviewer queue for ambiguous matches before merge.
- Reviewer accept/reject feedback that changes future clustering behavior.
- Activity-event joining from inspections, renewals, filings, and consumption signals.
- Active, Dormant, or Closed classification with evidence timelines.
- Government query support, including active factories in a PIN code with no recent inspection.

## Run Locally

No install is required. Open this file in a browser:

```text
index.html
```

If you prefer a local server, any static server will work:

```powershell
python -m http.server 8080
```

Then open:

```text
http://localhost:8080
```

## Files

- `index.html` - app structure and screens.
- `styles.css` - responsive UI styling.
- `app.js` - synthetic data, UBID resolution, event joining, activity classification, and rendering.
- `submission.md` - ready-to-paste Idea Phase submission.

## Demo Flow

1. Open Overview to see source records, UBIDs, reviewer queue count, and unmatched events.
2. Open UBID Linking to inspect confidence thresholds and evidence for each candidate pair.
3. Open Reviewer Queue and accept or reject ambiguous matches. The UBID clusters update immediately.
4. Open Activity Intelligence to review Active, Dormant, or Closed status with event evidence.
5. Open Govt Queries and run the sample operational query.
6. Open Submission for the title and description to paste into HackerEarth.

## Why Theme 1

This problem is both high-impact and demo-friendly. A strong prototype can show the full value chain without live government data: source-system isolation, business linking, reviewer safety, active-status inference, and auditable decision support. It also respects the non-negotiables because it runs as a layer beside existing systems and uses deterministic synthetic data.
