# simple_linalg

[Documentation](https://simple-eiffel.github.io/simple_linalg/) •
[GitHub](https://github.com/simple-eiffel/simple_linalg) •
[Issues](https://github.com/simple-eiffel/simple_linalg/issues)

![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)
![Eiffel 25.02](https://img.shields.io/badge/Eiffel-25.02-purple.svg)
![DBC: Contracts](https://img.shields.io/badge/DBC-Contracts-green.svg)

Linear algebra library: vectors, matrices, and decompositions with verified numerical stability.

Part of the [Simple Eiffel](https://github.com/simple-eiffel) ecosystem.

## Status

✅ **Production Ready** — v1.0.0
- 22 tests passing, 100% pass rate
- Vector specialization, column-major storage, condition number validation
- Design by Contract throughout

## Quick Start

```eiffel
local
    l_v: VECTOR_2
    l_m: MATRIX
do
    create l_v.make_from_components (3.0, 4.0)
    create l_m.make_identity (3)
    Result := l_v.norm  -- Returns 5.0
end
```

For complete documentation, see [our docs site](https://simple-eiffel.github.io/simple_linalg/).

## Features

- **Vector Operations** — 2D/3D specialized, n-dimensional generic with dot products and norms
- **Matrix Operations** — Multiplication, transpose, identity testing
- **LU Decomposition** — Tier 3 expert access with partial pivoting
- **Condition Number** — Numerical stability assessment (κ ≤ 1e12 threshold)
- **Immutable Results** — SCOOP-safe concurrent use
- **3-Tier API** — Simple for beginners, advanced for control, expert for research

For details, see the [User Guide](https://simple-eiffel.github.io/simple_linalg/user-guide.html).

## Installation

```bash
# Add to your ECF:
<library name="simple_linalg" location="$SIMPLE_EIFFEL/simple_linalg/simple_linalg.ecf"/>
```

## License

MIT License - See LICENSE file

## Support

- **Docs:** https://simple-eiffel.github.io/simple_linalg/
- **GitHub:** https://github.com/simple-eiffel/simple_linalg
- **Issues:** https://github.com/simple-eiffel/simple_linalg/issues
