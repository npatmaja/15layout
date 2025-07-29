# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## QMK Keyboard Layout: Ferris Sweep Colemak-DH

This is a custom QMK keymap for the Ferris Sweep keyboard implementing a Colemak-DH layout with home row modifiers and multiple layers.

## Build and Flash Commands

**Compile the keymap:**
```bash
# From QMK root directory (../../..)
qmk compile -kb ferris/sweep -km colemakdh_15layout
```

**Flash to keyboard:**
```bash
# From QMK root directory (../../..)
qmk flash -kb ferris/sweep -km colemakdh_15layout
```

**Alternative using make:**
```bash
# From QMK root directory (../../..)
make ferris/sweep:colemakdh_15layout
make ferris/sweep:colemakdh_15layout:flash
```

## Layout Architecture

### Layer Structure (keycodes.c:11-20)
- `_COLEMAKDH`: Base Colemak Mod-DH layout with home row modifiers
- `_SYMB`: Symbols layer accessed via space thumb key
- `_NAVI`: Navigation layer with arrow keys and shortcuts
- `_NUMB`: Numeric keypad layout
- `_FUNC`: Function keys F1-F12
- `_MOUS`: Mouse keys and wheel controls
- `_WSPC`: AwesomeWM workspace navigation (Mod+1-9)
- `_ADJUST`: System layer with QK_BOOT for flashing

### Home Row Modifiers (keycodes.c:28-38)
Left hand: A(Shift), R(Ctrl), S(Alt), T(GUI)
Right hand: N(GUI), E(Alt), I(Ctrl), O(Shift)

### Thumb Key Layout (keycodes.c:46-51)
- Left: Space/_SYMB, Tab/_NUMB  
- Right: Enter/_MOUS, Backspace/_NAVI

### Key Features
- **Combos**: B+G = Delete, J+M = Enter (keymap.c:93-104)
- **Tap Dance**: Semicolon/Colon on single/double tap (keymap.c:184-199)
- **Custom Keycodes**: Programming symbols like `->`, `=>`, `/*`, `*/` (keycodes.c:135-181)
- **Caps Word**: Enabled via both shifts (config.h:38)
- **Fine-tuned Timing**: Per-key tapping terms for optimal home row mods (keycodes.c:197-229)

## Configuration Notes

### Timing Settings (config.h:24-35)
- `TAPPING_TERM 240`: Base tap/hold timing
- `TAPPING_FORCE_HOLD_PER_KEY`: Selective auto-repeat behavior
- `QMK_KEYS_PER_SCAN 4`: Optimized for heavy chord usage

### Mouse Settings (config.h:40-62)
Tuned mouse key acceleration and scroll wheel timing for smooth operation.

## Development Status
Based on [ferris sweep finex](https://github.com/finex/ferris-sweep-finex) with modifications. See README.md for TODO items.