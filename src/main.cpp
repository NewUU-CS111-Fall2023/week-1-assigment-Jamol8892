/*
 * Author: Jamol
 * Date: 17.10.2023
 * Name:
 */

#include <iostream>
#include "task_1.h"
#include <string>

int main() {
    FamilyMembers* brother1 = new Brothers("Ali", 27, "Surveyor at Indorama");
    FamilyMembers* brother2 = new Brothers("Abdulaziz", 25, "Surveyor assistant at Indorama");
    FamilyMembers* brother3 = new Brothers("Jamshid", 21, "Civil Engineer");

    brother1 ->display();
    brother2 ->display();
    brother3 ->display();

    FamilyMembers* father = new Parents("Komiljon", 50, "Insurance");
    FamilyMembers* mother = new Parents("Gulsara", 48, "housewife");

    father ->display();
    mother ->display();

    FamilyMembers* nephew1 = new Nephews("Sa'diya", 2, "lol I even don't know");
    FamilyMembers* nephew2 = new Nephews("Aziza", 1, "none");

    nephew1 ->display();
    nephew2 ->display();

    delete nephew1;
    delete brother2;

    return 0;
}

