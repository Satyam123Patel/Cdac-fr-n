# Idea Phase Submission

## Title

VyaparaSetu: Explainable UBID and Active Business Intelligence for Karnataka

## Theme

Theme 1: Unified Business Identifier (UBID) and Active Business Intelligence by Karnataka Commerce & Industry

## Description

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

- Week 1: finalize synthetic/sandbox schemas, build connectors, define canonical fields, and implement deterministic blocking keys.
- Week 2: implement UBID resolution service, confidence calibration, and reviewer queue.
- Week 3: implement activity-event joining, Active/Dormant/Closed classification, evidence timelines, and unmatched-event review.
- Week 4: harden audit logs, add lookup APIs, demonstrate government queries, and prepare deployment documentation.

The included prototype demonstrates the end-to-end workflow today: synthetic records become UBIDs, ambiguous matches are reviewed, activity events produce explainable statuses, and decision-makers can run evidence-backed queries that are impossible with isolated department databases.
