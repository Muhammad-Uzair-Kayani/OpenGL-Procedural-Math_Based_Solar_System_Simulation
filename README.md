# OpenGL Procedural Math-Based Solar System Simulation

A small Solar System simulation built in **C++** using the **OpenGL API**. Planetary motion is generated procedurally using mathematical orbital calculations rather than keyframed animations.

## Features

* Procedural planet and moon orbits
* Relative planet sizes and orbital distances
* First-person camera
* Textured planets and rings
* Modular shape-based rendering system
* Built with Visual Studio 2022

## Requirements

* Visual Studio 2022
* OpenGL 3.3+
* Windows

## Building

A build script is included.

```bash
build.bat --> Creates Visual Studio project solution...Only windows support
```

## Simulation Speed

The simulation speed can be adjusted by editing:

```text
Resources/Shape/SolarSystem.h
```

Modify:

```cpp
inline float g_TimeScale = 1.0f;
```

`g_TimeScale` represents **simulated days per real second**.

Examples:

```cpp
g_TimeScale = 1.0f;    // 1 simulated day every second
g_TimeScale = 10.0f;   // 10 simulated days every second
g_TimeScale = 365.0f;  // 1 simulated year every second
```

## Controls

* **W A S D** — Move camera
* **Mouse** — Look around
* **Mouse Wheel** — Zoom

## Future Improvements

* Planet rotation
* Axial tilt
* Atmospheres and clouds
* HDR and bloom
* Physically based rendering (PBR)
* Skybox
* Shadows
* Orbital inclination and eccentricity
