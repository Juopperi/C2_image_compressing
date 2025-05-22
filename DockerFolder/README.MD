# DockerFolder

This directory contains the Docker environment setup and related scripts for building and running the project in a containerized environment.

## Overview

The provided Docker environment includes:

- **Verilator**: for high-performance SystemVerilog simulation.
- **GTKWave**: for waveform visualization and debugging.

This environment is pre-configured for HDL development and is intended to streamline the testing and verification process across different systems.

## Files

- `Dockerfile`  
  Defines the Docker image with Verilator, GTKWave, and supporting build tools pre-installed.

- `run.sh`  
  Shell script to build and run the Docker container on Linux/macOS.

- `run.ps1`  
  PowerShell script to build and run the Docker container on Windows.

## Usage

### On Linux/macOS:

./run.sh

### On Windows (PowerShell):

.\run.ps1

The scripts will:
	1.	Build the Docker image (if not already built).
	2.	Launch an interactive container with the project directory mounted.

Inside the container, you can directly compile and simulate Verilog/SystemVerilog code using Verilator, and view waveforms using GTKWave.
