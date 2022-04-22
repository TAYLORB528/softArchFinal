# softArchFinalProject

## Part 1

Estimate of Work: 10 to 15 hours

Actual work time: 12 hours

Requirements:

Have all localization capability done in one library (Required)
Have all localization capability in the core layer (Required)
Merge PO files (Desired)
Ability to switch locales during execution (Desired)

## Part 3

We were able to accomplish all 'required' requirements, which were: having all localization capability done in one library, and having the localization library in the core layer. We would've liked to extend this library to change the locale during runtime, merge po files together, or have utilities that check for mo files.

![image](https://user-images.githubusercontent.com/89398319/164760458-67377883-5191-42fe-9c9a-0a5e1bf921fd.png)

As you can see above, we have translated various messages outputted to the console from libraries not contained in the core layer.

![image](https://user-images.githubusercontent.com/89398319/164760755-0f68260b-ae56-4f15-84a2-a4be6cded0cc.png)

As demonstrated above in the UI library, any library that wishes to use the localization need simply create a localization object and call the translate string method using it.
