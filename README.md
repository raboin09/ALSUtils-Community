# ALSUtils-Community
This is a plugin that contains utils for the UE4 ALSV4 plugin. To use:

1. Download the main branch
2. Unzip it into your Project's (or Engine's) Plugins/ folder.
3. Open up your project in UE4
4. Right-click on a Skeleton, Skeletal Mesh, or Physics Asset in the Content Browser
5. Go to "Scripted Actions"
6. Select one of the items in "Scripted Actions"
7. Voila!

UPDATE 12/5/2021

Duplicating and Retargeting a Skeleton to the ALS_AnimBP is now automatic! Right click on a Skeleton or Skeletal Mesh and run the Retarget script to automatically adjust the Skeleton to fit ALS, adjust the Physics asset, and duplicate the ALS_AnimBP and output it to /Game. The path "Game/" can be changed in the widgets at Content/ALSUtils-Community by adjusting the value of the String OutputFolderPath variable.
