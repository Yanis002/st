# Known bugs

This document contains a list of known bugs in the game.

## Contents

- [Overlay mismatches](#overlay-mismatches)

## Overlay mismatches

- In the function `func_ov026_0211e8ec` at address `0x02011e8ec` in overlay 26 of the EU version, a 32-bit value is read from
the address `0x020b8310 + 0x374` and compares it to the number `1`. This address is meant to be a struct field in overlay 16,
but it is possible that overlay 5 is loaded instead, causing the function to read the value `0x0204a110` (a pool constant).
