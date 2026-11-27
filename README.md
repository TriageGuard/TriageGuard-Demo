# TriageGuard Live Showcase

Public pull requests demonstrating **[TriageGuard](https://triageguard.dev)** with read-only repository contents (`contents: read`).

## Open Showcase Pull Requests

| Pull Request | Classification | Scope |
| :--- | :--- | :--- |
| **[PR #10: GitHub Actions C checksum defect](../../pull/10)** | `CODE_DEFECT` | Diagnoses `-Werror=sign-compare` at `src/can_bus.c:16` from `workflow_run` logs and posts a committable inline PR suggestion. |
| **[PR #9: Azure Pipelines MISRA and Conan blocker](../../pull/9)** | `CODE_DEFECT` | Flags MISRA C:2012 Rule 11.3 at `src/can_bus.c:42`, reads `AGENTS.md` and `.agents/skills`, and separates the missing Conan package from the diff. |
| **[PR #6: CircleCI LTO OOMKilled (Exit 137)](../../pull/6)** | `INFRA_OOM_TIMEOUT` | Compacts linker OOM logs to `< 2,500` tokens and recommends `-DCMAKE_BUILD_PARALLEL_LEVEL=8`. |
| **[PR #7: Buildkite registry timeout and retry limit](../../pull/7)** | `TRANSIENT_FLAKE` | Enforces 1 automatic rerun per commit SHA and flags recurring `CHRONIC_FLAKE` failures without looping. |

## Endpoints

- **Landing Page:** [https://triageguard.dev](https://triageguard.dev)
- **Setup Guide:** [https://triageguard.dev/welcome](https://triageguard.dev/welcome)
- **Console:** [https://triageguard.dev/dashboard](https://triageguard.dev/dashboard)
- **MCP Server:** [https://triageguard.dev/mcp](https://triageguard.dev/mcp)
- **A2A Agent Card:** [https://triageguard.dev/.well-known/agent.json](https://triageguard.dev/.well-known/agent.json)
- **`llms.txt`:** [https://triageguard.dev/llms.txt](https://triageguard.dev/llms.txt)
- **Install App:** [https://github.com/apps/triageguard/installations/new](https://github.com/apps/triageguard/installations/new)
