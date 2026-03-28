#!/usr/bin/env bash

# Run all compile tests: per-option → exhaustive
#
# Usage:
#   ./run_all.sh [-kb <keyboard>] [-target <target>] [-j <jobs>]

set -euo pipefail

TESTS_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

echo "════════════════════════════════════════════════════════"
echo "  Step 1: Per-option compile"
echo "════════════════════════════════════════════════════════"
bash "$TESTS_DIR/test_per_option.sh" "$@"

echo ""
echo "════════════════════════════════════════════════════════"
echo "  Step 2: Exhaustive compile"
echo "════════════════════════════════════════════════════════"
bash "$TESTS_DIR/test_exhaustive.sh" "$@"
