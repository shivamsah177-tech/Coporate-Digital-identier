#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

// Structure for an access record
struct AccessRecord {
    int employeeID;
    string employeeName;
    string location;
    string accessTime;
    bool accessGranted;
};

// Corporate Digital Access Ledger
class AccessLedger {
private:
    unordered_map<int, string> employees;  // Hash Table
    vector<AccessRecord> ledger;           // Dynamic Array

public:

    // Add employee
    void addEmployee(int id, string name) {
        employees[id] = name;
        cout << "Employee added successfully.\n";
    }

    // Verify employee access
    bool verifyEmployee(int id) {
        return employees.find(id) != employees.end();
    }

    // Record badge swipe
    void recordAccess(int id, string location, string time) {

        AccessRecord record;

        record.employeeID = id;
        record.location = location;
        record.accessTime = time;

        if (verifyEmployee(id)) {
            record.employeeName = employees[id];
            record.accessGranted = true;
        } 
        else {
            record.employeeName = "Unknown";
            record.accessGranted = false;
        }

        ledger.push_back(record);
    }

    // Display all access records
    void displayLedger() {

        cout << "\n===== CORPORATE ACCESS LEDGER =====\n";

        for (const auto &record : ledger) {

            cout << "Employee ID: " << record.employeeID << endl;
            cout << "Employee Name: " << record.employeeName << endl;
            cout << "Location: " << record.location << endl;
            cout << "Time: " << record.accessTime << endl;

            if (record.accessGranted)
                cout << "Access: GRANTED\n";
            else
                cout << "Access: DENIED\n";

            cout << "-----------------------------------\n";
        }
    }
};

int main() {

    AccessLedger system;

    // Add employees
    system.addEmployee(101, "Rahul");
    system.addEmployee(102, "Amit");
    system.addEmployee(103, "Priya");

    // Badge access attempts
    system.recordAccess(101, "Main Gate", "09:00 AM");
    system.recordAccess(102, "Server Room", "09:15 AM");
    system.recordAccess(999, "Finance Room", "09:30 AM");
    system.recordAccess(103, "Research Lab", "10:00 AM");

    // Display ledger
    system.displayLedger();

    return 0;
}