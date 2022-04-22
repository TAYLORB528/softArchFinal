# Design Document

### Description
Our new module with handle all localization and translation tasks in one library. We will have dependencies on the Localization library from all libraries
that we want to translate (for example, the Journaling library). The Localization library will reside in the core layer and have no dependencies beyond a dependency on the Boost library.

### UML Diagram

Note: The UML diagram is very complicated because of the number of libraries in the project, but we wanted to include it for assignment requirement purposes.

![UML Diagram](/UML_Diagram.jpg)
