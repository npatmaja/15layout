# Ferris Sweep Colemak-DH Layout Visualization

## Physical Layout Reference
```
┌─────┬─────┬─────┬─────┬─────┐     ┌─────┬─────┬─────┬─────┬─────┐
│  0  │  1  │  2  │  3  │  4  │     │  4  │  3  │  2  │  1  │  0  │ Row 1
├─────┼─────┼─────┼─────┼─────┤     ├─────┼─────┼─────┼─────┼─────┤
│  0  │  1  │  2  │  3  │  4  │     │  4  │  3  │  2  │  1  │  0  │ Row 2
├─────┼─────┼─────┼─────┼─────┤     ├─────┼─────┼─────┼─────┼─────┤
│  0  │  1  │  2  │  3  │  4  │     │  4  │  3  │  2  │  1  │  0  │ Row 3
└─────┴─────┴─────┴─────┴─────┘     └─────┴─────┴─────┴─────┴─────┘
              ┌─────┬─────┐               ┌─────┬─────┐
              │ T1  │ T2  │               │ T2  │ T1  │ Thumbs
              └─────┴─────┘               └─────┴─────┘
        Left Hand                              Right Hand
```

## Layer 0: _COLEMAKDH (Base Layer)
**The main typing layer with Colemak Mod-DH layout and home row modifiers**

```
┌─────┬─────┬─────┬─────┬─────┐     ┌─────┬─────┬─────┬─────┬─────┐
│  Q  │  W  │  F  │  P  │  B  │     │  J  │  L  │  U  │  Y  │ ;/: │
├─────┼─────┼─────┼─────┼─────┤     ├─────┼─────┼─────┼─────┼─────┤
│A/LSf│R/LCt│S/LAl│T/LGu│  G  │     │  M  │N/RGu│E/RAl│I/RCt│O/RSf│
├─────┼─────┼─────┼─────┼─────┤     ├─────┼─────┼─────┼─────┼─────┤
│  Z  │X/RAl│  C  │  D  │  V  │     │  K  │  H  │  ,  │./RAl│  /  │
└─────┴─────┴─────┴─────┴─────┘     └─────┴─────┴─────┴─────┴─────┘
              ┌─────┬─────┐               ┌─────┬─────┐
              │Sp/Sy│Tb/Nu│               │En/Mo│Bs/Nv│
              └─────┴─────┘               └─────┴─────┘

Legend: Sf=Shift, Ct=Ctrl, Al=Alt, Gu=GUI, Sy=Symbol, Nu=Number, Mo=Mouse, Nv=Nav
```

## Layer 1: _SYMB (Symbols)
**Programming symbols and special characters**

```
┌─────┬─────┬─────┬─────┬─────┐     ┌─────┬─────┬─────┬─────┬─────┐
│  !  │  @  │  #  │  $  │  %  │     │  ^  │  &  │  *  │ /*  │ */  │
├─────┼─────┼─────┼─────┼─────┤     ├─────┼─────┼─────┼─────┼─────┤
│  |  │  ±  │  '  │  "  │  `  │     │  '  │  :  │  ~  │ ->  │ =>  │
├─────┼─────┼─────┼─────┼─────┤     ├─────┼─────┼─────┼─────┼─────┤
│  \  │  _  │  {  │  [  │  =  │     │  `  │  ]  │  }  │ :=  │ //  │
└─────┴─────┴─────┴─────┴─────┘     └─────┴─────┴─────┴─────┴─────┘
              ┌─────┬─────┐               ┌─────┬─────┐
              │ ___ │ XXX │               │  )  │  (  │
              └─────┴─────┘               └─────┴─────┘

Special: /* = comment open, */ = comment close, -> = arrow, => = fat arrow
         := = assignment, // = double slash, ± = plus/minus
```

## Layer 2: _NAVI (Navigation)
**Arrow keys, text selection, and clipboard operations**

```
┌─────┬─────┬─────┬─────┬─────┐     ┌─────┬─────┬─────┬─────┬─────┐
│ XXX │ Tab │BTTab│NTab │ Spc │     │ XXX │WSLft│WLMov│WRMov│WSRgt│
├─────┼─────┼─────┼─────┼─────┤     ├─────┼─────┼─────┼─────┼─────┤
│Shift│ Ctrl│ Alt │ GUI │Enter│     │ Tab │ ←   │ ↓   │ ↑   │ →   │
├─────┼─────┼─────┼─────┼─────┤     ├─────┼─────┼─────┼─────┼─────┤
│Undo │ Cut │Copy │Paste│Redo │     │ ___ │Home │PgDn │PgUp │ End │
└─────┴─────┴─────┴─────┴─────┘     └─────┴─────┴─────┴─────┴─────┘
              ┌─────┬─────┐               ┌─────┬─────┐
              │ Fun │ Wsp │               │ XXX │ ___ │
              └─────┴─────┘               └─────┴─────┘

Navigation: WSLft/WSRgt = Word Select Left/Right (Ctrl+Shift+←/→)
           WLMov/WRMov = Word Move Left/Right (Ctrl+←/→)
           BTTab = Back Tab (Shift+Tab), NTab = Next Tab (Ctrl+Tab)
           Left home row now matches right side: Shift, Ctrl, Alt, GUI
```

## Layer 3: _NUMB (Number Pad)
**Numeric keypad layout with operators**

```
┌─────┬─────┬─────┬─────┬─────┐     ┌─────┬─────┬─────┬─────┬─────┐
│  -  │  7  │  8  │  9  │  +  │     │ XXX │ XXX │ XXX │ XXX │ XXX │
├─────┼─────┼─────┼─────┼─────┤     ├─────┼─────┼─────┼─────┼─────┤
│  .  │  4  │  5  │  6  │  *  │     │ XXX │RGui │LAlt │RCtrl│RSft │
├─────┼─────┼─────┼─────┼─────┤     ├─────┼─────┼─────┼─────┼─────┤
│  /  │  1  │  2  │  3  │  =  │     │ XXX │ XXX │ XXX │RAlt │ XXX │
└─────┴─────┴─────┴─────┴─────┘     └─────┴─────┴─────┴─────┴─────┘
              ┌─────┬─────┐               ┌─────┬─────┐
              │ Adj │ ___ │               │  ,  │  0  │
              └─────┴─────┘               └─────┴─────┘

Calculator layout: 7,8,9 / 4,5,6 / 1,2,3 with operators on edges
```

## Layer 4: _FUNC (Function Keys)
**Function keys F1-F12 and system keys**

```
┌─────┬─────┬─────┬─────┬─────┐     ┌─────┬─────┬─────┬─────┬─────┐
│ F12 │ F7  │ F8  │ F9  │Caps │     │ XXX │ XXX │ XXX │ XXX │ XXX │
├─────┼─────┼─────┼─────┼─────┤     ├─────┼─────┼─────┼─────┼─────┤
│ F11 │ F4  │ F5  │ F6  │PScr │     │ XXX │RGui │LAlt │RCtrl│RSft │
├─────┼─────┼─────┼─────┼─────┤     ├─────┼─────┼─────┼─────┼─────┤
│ F10 │ F1  │ F2  │ F3  │ Ins │     │ XXX │ XXX │ XXX │RAlt │ XXX │
└─────┴─────┴─────┴─────┴─────┘     └─────┴─────┴─────┴─────┴─────┘
              ┌─────┬─────┐               ┌─────┬─────┐
              │ XXX │ XXX │               │ XXX │ XXX │
              └─────┴─────┘               └─────┴─────┘

Function keys arranged by frequency: F4,F5,F6 on home row for easy access
```

## Layer 5: _MOUS (Mouse)
**Mouse movement, clicks, and wheel control**

```
┌─────┬─────┬─────┬─────┬─────┐     ┌─────┬─────┬─────┬─────┬─────┐
│Ctrl+│Ctrl+│Ctrl+│Ctrl+│Ctrl+│     │ XXX │ XXX │ M↑  │ XXX │ XXX │
│  Q  │  W  │  F  │  P  │  B  │     │     │     │     │     │     │
├─────┼─────┼─────┼─────┼─────┤     ├─────┼─────┼─────┼─────┼─────┤
│Ctrl+│Ctrl+│Ctrl+│Ctrl+│Ctrl+│     │Btn3 │ M←  │ M↓  │ M→  │ XXX │
│  A  │  R  │  S  │  T  │  G  │     │     │     │     │     │     │
├─────┼─────┼─────┼─────┼─────┤     ├─────┼─────┼─────┼─────┼─────┤
│Undo │ Cut │Copy │Paste│Redo │     │ XXX │ W←  │ W↓  │ W↑  │ W→  │
└─────┴─────┴─────┴─────┴─────┘     └─────┴─────┴─────┴─────┴─────┘
              ┌─────┬─────┐               ┌─────┬─────┐
              │Btn1 │Btn2 │               │ ___ │ Adj │
              └─────┴─────┘               └─────┴─────┘

Mouse: M = Mouse cursor, W = Wheel, Btn = Mouse button
       Left side has Ctrl+letter combinations for app shortcuts
```

## Layer 6: _WSPC (Workspace - AwesomeWM)
**Window manager workspace switching**

```
┌─────┬─────┬─────┬─────┬─────┐     ┌─────┬─────┬─────┬─────┬─────┐
│ XXX │Win+7│Win+8│Win+9│ XXX │     │ XXX │ XXX │ XXX │ XXX │ XXX │
├─────┼─────┼─────┼─────┼─────┤     ├─────┼─────┼─────┼─────┼─────┤
│ XXX │Win+4│Win+5│Win+6│ XXX │     │ XXX │RGui │LAlt │RCtrl│RSft │
├─────┼─────┼─────┼─────┼─────┤     ├─────┼─────┼─────┼─────┼─────┤
│ XXX │Win+1│Win+2│Win+3│ XXX │     │ XXX │ XXX │ XXX │RAlt │ XXX │
└─────┴─────┴─────┴─────┴─────┘     └─────┴─────┴─────┴─────┴─────┘
              ┌─────┬─────┐               ┌─────┬─────┐
              │ XXX │ XXX │               │ XXX │ XXX │
              └─────┴─────┘               └─────┴─────┘

AwesomeWM: Win+1 through Win+9 for workspace switching
           Arranged like a numpad for easy memorization
```

## Layer 7: _ADJUST (System/Reset)
**System controls and firmware reset**

```
┌─────┬─────┬─────┬─────┬─────┐     ┌─────┬─────┬─────┬─────┬─────┐
│Boot │ XXX │ XXX │ XXX │ XXX │     │ XXX │ XXX │ XXX │ XXX │Boot │
├─────┼─────┼─────┼─────┼─────┤     ├─────┼─────┼─────┼─────┼─────┤
│ XXX │ XXX │ XXX │ XXX │ XXX │     │ XXX │ XXX │ XXX │ XXX │ XXX │
├─────┼─────┼─────┼─────┼─────┤     ├─────┼─────┼─────┼─────┼─────┤
│ XXX │ XXX │ XXX │ XXX │ XXX │     │ XXX │ XXX │ XXX │ XXX │ XXX │
└─────┴─────┴─────┴─────┴─────┘     └─────┴─────┴─────┴─────┴─────┘
              ┌─────┬─────┐               ┌─────┬─────┐
              │ ___ │ ___ │               │ ___ │ ___ │
              └─────┴─────┘               └─────┴─────┘

Boot = QK_BOOT (reset to bootloader for flashing)
```

## Special Features

### Combos
- **B + G** → Delete
- **J + M** → Enter

### Tap Dance
- **;** key → Single tap: `;`, Double tap: `:`

### Home Row Modifiers
When held, the home row keys become modifiers:
- **Left hand**: A=Shift, R=Ctrl, S=Alt, T=GUI
- **Right hand**: N=GUI, E=Alt, I=Ctrl, O=Shift

### Layer Access (Thumb Keys)
- **Space**: Tap for space, hold for Symbols layer
- **Tab**: Tap for tab, hold for Numbers layer  
- **Enter**: Tap for enter, hold for Mouse layer
- **Backspace**: Tap for backspace, hold for Navigation layer

### Layer Access Keys
- **Fun**: One-shot access to Function layer
- **Wsp**: One-shot access to Workspace layer
- **Adj**: One-shot access to Adjust layer

## Custom Symbols Reference
| Key | Output | Description |
|-----|--------|-------------|
| -> | `->` | Arrow operator |
| => | `=>` | Fat arrow |
| /* | `/*` | Comment open |
| */ | `*/` | Comment close |
| := | `:=` | Assignment operator |
| // | `//` | Double slash |

This layout is optimized for programming with easy access to symbols, efficient navigation, and ergonomic typing with home row modifiers.