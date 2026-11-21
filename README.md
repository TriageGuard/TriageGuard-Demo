# 🛡️ TriageGuard Live Showcase

Welcome to the interactive showcase repository for **[TriageGuard](https://triageguard.dev)** — an autonomous, event-driven CI/CD Triage and Rollback Guardrails service.

👉 **Explore the 5 Open Pull Requests to see `triageguard[bot]` in action:**

| Pull Request | Failure Classification | What It Demonstrates |
| :--- | :--- | :--- |
| **[PR #9: MISRA C:2012 Rule 11.3 &amp; Conan Blocker](../../pull/9)** | `CODE_DEFECT` (`95%`) | Azure Pipelines static analysis pinpointing `src/can_bus.c:42`, consulting repo [`AGENTS.md`](./AGENTS.md) &amp; [`misra-c-compliance`](./.agents/skills/misra-c-compliance/SKILL.md), and surfacing an external `ConanException` under **Additional Issues Noted**. |
| **[PR #10: Zero-Config GitHub Actions CI Defect](../../pull/10)** | `CODE_DEFECT` (`95%`) | Out-of-the-box GitHub Actions `workflow_run` failure triage pinpointing `-Werror=sign-compare` in `src/can_bus.c:16` with zero extra workflow configuration. |
| **[PR #6: CircleCI LTO OOMKilled (Exit 137)](../../pull/6)** | `INFRA_OOM_TIMEOUT` (`95%`) | Sanitizes massive `ld.lld` OOM logs into `&lt; 2,500` tokens and prescribes parallelism/memory adjustments without blaming source logic. |
| **[PR #7: Registry TLS Timeout &amp; Episodic Memory](../../pull/7)** | `TRANSIENT_FLAKE` (`90%`) | Enforces **Max 1 Auto-Retry per Commit SHA** and flags recurring failures across runs with **CHRONIC_FLAKE** detection. |
| **[PR #8: Autonomous Post-Merge Rollback (`revert/triage-502`)](../../pull/8)** | `CREATE_REVERT_PR` | Opened **100% autonomously by `triageguard[bot]`** on isolated branch `revert/triage-502` after a post-merge regression on `main` (respecting the Read-Only Default Branch invariant). |

---

## 🔗 Live Production Endpoints

- **Product & Architecture Landing Page:** [https://triageguard.dev](https://triageguard.dev)
- **Customer Onboarding Guide:** [https://triageguard.dev/welcome](https://triageguard.dev/welcome)
- **Executive ROI & Guardrails Dashboard:** [https://triageguard.dev/dashboard](https://triageguard.dev/dashboard)
- **Native MCP Server (JSON-RPC 2.0):** [https://triageguard.dev/mcp](https://triageguard.dev/mcp)
- **Google A2A Agent Card:** [https://triageguard.dev/.well-known/agent.json](https://triageguard.dev/.well-known/agent.json)
- **`llms.txt` Specification:** [https://triageguard.dev/llms.txt](https://triageguard.dev/llms.txt)
- **Install on GitHub:** [https://github.com/apps/triageguard/installations/new](https://github.com/apps/triageguard/installations/new)
