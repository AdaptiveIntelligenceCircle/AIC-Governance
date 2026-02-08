# Security Policy – AIC

## Security Philosophy

AIC is designed under the assumption that:
- Systems will be attacked
- Authority can be compromised
- Incentives can corrupt intelligence

Security is therefore **architectural**, not cosmetic.

---

## Reporting a Vulnerability

If you discover a security issue:

- **Do NOT** open a public issue
- **Do NOT** exploit or share details publicly

Instead, report responsibly via:
- Private GitHub Security Advisory
- Or direct contact with maintainers (if provided)

Include:
- Description of the vulnerability
- Potential impact
- Reproduction steps (if safe)
- Suggested mitigation (optional)

---

## In-Scope Vulnerabilities

We take seriously issues related to:
- Privilege escalation
- Unauthorized behavior adaptation
- Trust model bypass
- Policy or governance circumvention
- Simulation → real-world leakage
- Plugin / extension abuse
- Replay, rollback, or introspection manipulation

---

## Out-of-Scope

- Denial-of-service caused by misconfiguration
- Hypothetical attacks without technical grounding
- Issues already documented as known limitations

---

## Responsible Disclosure

We aim to:
- Acknowledge reports promptly
- Assess impact ethically and technically
- Release fixes transparently when appropriate

AIC does **not** run a bug bounty program.
Recognition is based on trust, not incentives.

---

## Security as a Shared Duty

Every contributor is expected to think like:
- A defender
- A philosopher
- An attacker
- A human

Security is not a feature.
It is a continuous discipline.
