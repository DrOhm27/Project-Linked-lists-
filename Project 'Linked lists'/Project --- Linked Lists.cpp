//include tab
#include <iostream>
#include <string>

//namespace tab
using namespace std;

//structure tab
struct driver {
    string name;
    int age;
    float height;
    string country_of_origin;
    driver* next;
};

driver* start = NULL;
driver* last = NULL;

//add driver function tab
void add_driver() {

    driver* new_driver = new driver;

    //inputing information
    cout << "Enter name: ";
    cin >> new_driver->name;

    cout << "Enter age: ";
    cin >> new_driver->age;

    cout << "Enter height: ";
    cin >> new_driver->height;

    cout << "Enter country of origin: ";
    cin >> new_driver->country_of_origin;

    //operation.1
    new_driver->next = NULL;
    if (start == NULL) {
        start = new_driver;
    }
    else {
        last->next = new_driver;
    }
    last = new_driver;
}

//print drivers function
void print_drivers() {
    driver* current_driver = start;

    while (current_driver != NULL) {

        //printing information
        cout << "Name: " << current_driver->name << endl;

        cout << "Age: " << current_driver->age << endl;

        cout << "Height: " << current_driver->height << endl;

        cout << "Country of origin: " << current_driver->country_of_origin << endl;

        cout << endl;

        current_driver = current_driver->next;
    }
}

int main() {

    //declaration
    bool choice = true;

    //main while
    while (choice) {
        //adding drivers
        add_driver();
        //choice point
        cout << "Do you want to add another driver? (1 for yes, 0 for no)";
        cin >> choice;

        cout << endl;
    }
    
    //printing drivers
    print_drivers();

    return 0;
}


