Corporate Digital Access Ledger

2.1 Project Title

Corporate Digital Access Ledger

A Data Structures and Algorithms (DSA)
based system for managing, verifying,
storing, and auditing employee and visitor
access records in a corporate
environment.

2.2 Problem Statement

In a large corporation, thousands of
employees and visitors use digital badges
to enter different buildings and security
zones. Every badge swipe must be verified
and recorded.

A traditional system may become slow
when the number of employees and
access records increases. Searching
through a large collection of records can
take considerable time.

The Corporate Digital Access Ledger
provides an efficient solution using
suitable data structures and algorithms. It
stores employee details, access
permissions, and badge-swipe records
while allowing fast searching, verification,
insertion, and auditing.

2.3 Objectives

The main objectives of the project are:

1. To store employee and visitor access
information efficiently.

2. To verify whether a badge has
permission to enter a particular
security zone.

3. To record every successful or failed
access attempt.

4. To provide fast searching of
employee and access records.

5. To support temporary access
permissions for visitors.

6. To maintain an audit history of badge
activity.

7. To reduce the time required for
searching and verification.

8. To demonstrate practical applications
of DSA concepts.

2.4 System Overview / Architecture

The system consists of the following major
components:

1. Employee Management
   
● Stores employee ID, name, department,
and badge ID.
● Allows employee records to be added
and searched.

2. Access Permission Management
● Stores the zones that an employee or
visitor can access.
● Checks whether access is allowed.

3. Badge Verification
● Takes a badge ID and requested zone
as input.
● Verifies the identity and access
permission.

4. Access Ledger

● Records date/time, badge ID, zone, and
access result.
● Maintains a history for auditing. 

5. Audit/Search Module
● Searches access records.
● Displays successful and denied
attempts.

Basic Architecture
+----------------------+
| Badge Scanner |
+----------+-----------+
|
v
+----------------------+
| Badge Verification |
+----------+-----------+
|
+----------+----------+
| |
v v
+---------------+
+----------------+
| Employee Data | | Access
Control |
+---------------+
+----------------+
| |
+----------+----------+
|
v
+----------------------+
| Access Ledger |
+----------+-----------+
|
v
+----------------------+
| Search / Audit |
+----------------------+

2.5 Data Structures and Algorithms Used

1. Hash Table / unordered_map

Used for quickly finding employee or
badge information using a unique badge
ID.

Average Time Complexity: O(1)

2. Vector
   
Used to store the sequence of access-log
records.

Access Time: O(1) by index

3. Set / unordered_set
   
Used to store the security zones
accessible by an employee.

4. Struct
   
Used to group related information such as
employee details and access-log details.
Algorithms

1. Hashing
● Converts a badge ID into a location for
fast searching.
● Used for employee and badge
verification.

2. Searching
● Searches employee records and
access logs.

● Hash-based searching is used where
possible.

3. Insertion
● Adds new employees, visitors,
permissions, and access records.

4. Access Verification Algorithm
   
Start
↓
Read Badge ID
↓
Search Badge in Employee Table
↓
Badge Found?
├── No → Deny Access → Store
Log
↓ Yes
Check Requested Zone
↓
Permission Available?
├── No → Deny Access → Store
Log
↓ Yes
Grant Access → Store Log
↓
End
2.6 Implementation Approach

The project can be implemented in C++
using STL data structures.

Main Classes/Structures

struct Employee {

int employeeID;

string name;

string department;

string badgeID;

unordered_set<string>
allowedZones;

};


struct AccessLog {


string badgeID;

string zone;

string result;

string time;

};

The main system maintains an
unordered_map where the badge ID acts
as the key.

Badge ID → Employee Details

When a badge is scanned:

1. The system searches for the badge ID.
   
2. If the badge is not found, access is
denied.

3. If the badge exists, the requested
zone is checked.

4. If the zone is authorized, access is
granted.

5. Otherwise, access is denied.
   
6. The result is added to the access
ledger.

2.7 Time and Space Complexity Analysis
O
a
t
a
S
t
p
e
r
a
t
D
a
t
a
S
t
A
v
e
r
a
g
i
o
n
A
d
d
E
m
p
l
o
y
e
e
r
u
c
t
u
r
e
H
a
s
h
T
a
b
l
e
e
T
i
m
e
O
(
1
)
S
e
a
r
c
h
E
m
p
l
o
y
e
e
V
e
r
H
a
s
h
T
a
b
l
e
H
a
s
O
(
1
)
O
(
i
f
y
B
a
d
g
e
C
h
e
c
k
Z
o
n
e
h
T
a
b
l
e
H
a
s
h
S
e
t
1
)
O
(
1
)
A
d
d
A
c
c
e
s
s
L
o
g
S
e
a
r
V
e
c
t
o
r
V
e
c
t
O
(
1
)
a
m
o
r
t
i
z
e
d
O
(
n
)
c
h
A
ll
L
o
g
s
o
r
Space Complexity

If there are n employees and m access
logs, the approximate space requirement
is:

O(n + m)

The system is therefore suitable for
handling a large number of employees and
access records.

2.8 Execution Steps

1. Start the C++ program.
   
2. Create the employee database.

3. Add employee and badge
information.

4. Assign authorized security zones.

5. Enter a badge ID.
 
6. Enter the requested security zone.
 
7. Search for the badge using the hash
table.

8. Verify the employee's permission.
 
9. Display Access Granted or Access
Denied.

10. Store the access attempt in the
ledger.

11. Display the access history when
required.

12. Exit the program.
 
2.9 Sample Inputs and Outputs
    
Sample Input

Enter Badge ID: B1001

Enter Security Zone: ServerRoom



Sample Output

Badge Found: Yes

Employee: Rahul Sharma

Department: IT

Zone: ServerRoom

Access Status: ACCESS GRANTED


Access record added to ledger.


Example of Denied Access


Enter Badge ID: B1002

Enter Security Zone: ServerRoom



Badge Found: Yes

Employee: Priya Singh 

Access Status: ACCESS DENIED 

Reason: No permission for this
zone.

Access record added to ledger.

Example of Invalid Badge

Enter Badge ID: B9999

Enter Security Zone: Finance

Access Status: ACCESS DENIED

Reason: Invalid Badge ID.

2.10 Screenshots

The following screenshots can be included
in the final practical report:

Screenshot 1: C++ source code in VS
Code/CodeBlocks.

Screenshot 2: Employee records being
entered.

Screenshot 3: Successful badge
verification showing ACCESS GRANTED.

Screenshot 4: Unauthorized badge
verification showing ACCESS DENIED.

Screenshot 5: Access ledger displaying
previous access attempts.

Suggested screenshot caption:

Figure 1: Corporate Digital Access
Ledger program execution showing
badge verification and access status.

2.11 Results and Observations

The Corporate Digital Access Ledger
successfully demonstrates the application
of DSA in a real-world security system.

Results
● Employee information was stored
successfully.
● Badge IDs could be searched
efficiently.
● Security-zone permissions were
verified.
● Authorized users received access.
Unauthorized users were denied
access.
● Every access attempt was stored in the
ledger.
● Hash tables provided fast
average-case searching.
● The system can be extended to
support thousands of employees.


Observations

The use of hashing significantly improves
the efficiency of badge verification
compared with sequential searching

through all employee records. The access
ledger also provides a useful history for
security auditing.

2.12 Conclusion

The Corporate Digital Access Ledger
demonstrates how Data Structures and
Algorithms can be applied to a practical
corporate security problem.

Hash tables provide fast employee and
badge searching, sets provide efficient
permission checking, and vectors maintain
the access history. The system can verify
access, record every attempt, and support
auditing.

Overall, the project provides an efficient,
scalable, and easy-to-understand
DSA-based solution for managing
corporate digital access records.

Future Scope


The system can be further improved by adding:
● Database connectivity.
● Real-time badge scanners.
● Automatic date and time recording.
● Role-based access control.
● Temporary visitor access with expiry
time.
● Encryption and authentication.
● Graphical user interface.
● Advanced audit and reporting features.


Project Outcome:
The project successfully applies Hashing,
Sets, Structures, Searching, and
Dynamic Arrays to create an efficient
Corporate Digital Access Ledger.
