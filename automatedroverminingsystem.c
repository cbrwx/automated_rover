// Variables to store necessary blocks
List<IMyMotorSuspension> wheels = new List<IMyMotorSuspension>();
IMyOreDetector oreDetector;
List<IMyShipDrill> drills = new List<IMyShipDrill>();
IMyRadioAntenna antenna;
IMyTextPanel lcd;

public Program()
{
    Runtime.UpdateFrequency = UpdateFrequency.Update100;
    Initialize();
}

void Initialize()
{
    GridTerminalSystem.GetBlocksOfType(wheels);
    oreDetector = GridTerminalSystem.GetBlockWithName("Ore Detector") as IMyOreDetector;
    GridTerminalSystem.GetBlocksOfType(drills);
    antenna = GridTerminalSystem.GetBlockWithName("Antenna") as IMyRadioAntenna;
    lcd = GridTerminalSystem.GetBlockWithName("LCD Panel") as IMyTextPanel;
}

void Main(string argument)
{
    if (argument == "start")
    {
        // Activate ore detector
        oreDetector.Enabled = true;
        
        // Activate drills
        foreach (var drill in drills)
        {
            drill.Enabled = true;
        }

        // Start PAM script
        var pamProgrammableBlock = GridTerminalSystem.GetBlockWithName("PAM Programmable Block") as IMyProgrammableBlock;
        pamProgrammableBlock.TryRun("Start");
    }
    else if (argument == "stop")
    {
        // Deactivate ore detector
        oreDetector.Enabled = false;

        // Deactivate drills
        foreach (var drill in drills)
        {
            drill.Enabled = false;
        }

        // Stop PAM script
        var pamProgrammableBlock = GridTerminalSystem.GetBlockWithName("PAM Programmable Block") as IMyProgrammableBlock;
        pamProgrammableBlock.TryRun("Stop");
    }
    else if (argument == "status")
    {
        // Display status on LCD
        lcd.WriteText("Ore Detector: " + (oreDetector.Enabled ? "On" : "Off") + "\n");
        lcd.WriteText("Drills: " + (drills[0].Enabled ? "On" : "Off") + "\n");
    }
}
