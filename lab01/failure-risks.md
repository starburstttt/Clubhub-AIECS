
# Failure risks · ITC Club Hub (v0.1, 2026-10-20)

| #  | How the project could fail | Chapter 01 topic | Early warning sign | First countermeasure | Owner |
|----|----------------------------|------------------|--------------------|----------------------|-------|
| F1 | The 24-hour cancellation rule and the capacity rule are coded in two places and drift apart | Essential difficulties (invisibility) | The same rule check appears in two files | Each business rule lives in one function in namespace `clubhub` with a unit test; rules listed in the README | SOUNGHAN Sethaleaph |
| F2 | Five members work in parallel and two of them build the same feature, or build parts that do not fit together | Scale and communication | Two open pull requests change the same file; tasks exist only in chat | Every task is a GitHub Issue with one assignee; a short check-in three times a week | PHO Phatsophal |
| F3 | The client asks for the waiting list or recurring events in week 11, after the data model was fixed in Sprint 1 | Changing requirements and cost of change | One new requirement forces edits in more than three files | Keep events and registrations as separate types; confirm Should features with the client at each sprint start | CHENG Varyroitanak |
| F4 | A member list exported from a spreadsheet, with real e-mails and phone numbers, is committed as test data | Reliability, security and safety | A data file shows up in `git status` | Only invented test data in the repo; `data/` listed in `.gitignore`; review every CSV in pull requests | YEN Chhavorn |
| F5 | In the Sprint 2 demo the command-line program, the stored CSV files and the web and mobile models do not match, and the build only worked on one laptop | Legacy, integration and technical debt | "Works on my machine" comments; TODOs pile up in the code | Build from a fresh clone at the end of every lab; keep a short debt list in the README | TANG Hengly |


