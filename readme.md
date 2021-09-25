# How to write effective test cases quickly  

- How to write test cases quickly so that they are:  
- Easy to write
- Easy to understand
- Easy to run
- Easy to change
- Have less mistakes???
- Test case example
- Use tables
- Refer other documents: IDs instead of text
- De-clutter

|TEST CASE(S)|Steps|Expected Results|Status(Not exec/Blocked/Fail/Pass)|
|------------|-----|----------------|---------------------------------|
|Test Case:  |1    |
|1)|Enter a valid username and valid password, Click login button.|The application should display the home page|  
|2)|Log out. Enter a valid username and an invalid password, Click login button.|The application should display an error message and re-open the login page.|
|3)|Log out. Enter an invalid username and an invalid password. Click login button.|The application should display an error message and re-open the login page.|
|Test Case: |2|
|1)|Verify the following username and password combinations. Note: <font color=yellow> V</font> means <font color=yellow>valid</font> and <font color=yellow>I</font> means <font color=yellow>invalid</font>.|Note: <font color=yellow>E</font> means <font color=yellow>error</font> message and <font color=yellow>H</font> means <font color=yellow>home</font> page.|
|1.1)|blank, blank|E|
|1.2)|blank, I|E|
|1.3)|blank, V|E|
|1.4)|I, blank|E|
|1.5)|I, I|E|
|1.6)|I, V|E|
|1.7)|V, blank|E|
|1.8)|V, I|E|
|1.9)|V, V|H|

What is Unit Testing?

- Unit Testing is also called Module Testing or Component Testing. 

- It is done during the development of an application to check whether the individual unit or module of the application is working properly. 

- It is done by the developers in the developer’s environment.

- It is performed by using White Box Testing method.

- There are two types of Unit Testing – Manual & Automated.

- Unit Testing is the first level of Software Testing. It is performed prior to Integration Testing.

- It is normally performed by Software Developers or White box testers.

Goals:

- To isolate every section of code.
- To make sure individual parts are correct.
- To find bugs early in development cycle.
- To save testing cost.
- To allow developers to refactor or upgrade code at the later date.

Advantages:

- It finds problems early in the development cycle. So it reduces the cost of testing. The cost of finding a bug earlier is considerably lower than the cost of finding it later.
- It reduces defects when changing the existing functionality (Regression Testing)
- It simplifies the debugging process. Debugging is the process of finding and resolving defects within a program that prevent correct operation of a software. When unit testing is implemented only the latest changes made in the code need to be debugged when a test fails.
- It provides code documentation due to better coding standards and practices
