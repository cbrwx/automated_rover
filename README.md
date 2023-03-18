# Automated Rover Mining System for Space Engineers
This script automates the process of ore mining using a rover in Space Engineers. The script controls the rover's ore detector, drills, and uses the PAM (Path Auto Miner) script for pathfinding and navigation. It can start and stop the mining process and display the status of the rover's systems on an LCD panel.

# Features
- Automatically activate the ore detector and drills when mining starts
- Use the PAM script for pathfinding and navigation
- Stop the mining process and deactivate the rover's systems
- Display the status of the rover's systems on an LCD panel
# Requirements
- A rover with motor suspension wheels
- An ore detector block
- One or more ship drill blocks
- A radio antenna block
- An LCD panel for displaying status
- A programmable block with the PAM script installed
# Setup
- Build a rover with the required blocks (wheels, ore detector, drills, antenna, LCD panel, and programmable block).
- Install the PAM script in a programmable block on the rover.
- Add the "AutomatedRoverMiningSystem" script to another programmable block on the rover.
- Name the rover's blocks according to the script's requirements (e.g., "Ore Detector", "Antenna", "LCD Panel", "PAM Programmable Block").
- Configure the PAM script following its instructions to set up the pathfinding and navigation for your mining area.
# Usage
To use the script, run one of the following commands in the programmable block's terminal or through a timer block:
- start: Starts the mining process, activates the ore detector and drills, and starts the PAM script.
- stop: Stops the mining process, deactivates the ore detector and drills, and stops the PAM script.
- status: Displays the status of the rover's systems (ore detector and drills) on the LCD panel.

Link to PAM's script: https://steamcommunity.com/sharedfiles/filedetails/?id=1507646929

.cbrwx
