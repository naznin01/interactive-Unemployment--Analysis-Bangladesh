#include <iostream>
#include <string>
using namespace std;

struct Cause {
    string name;
    string impact;           
    int affectedPercent;     
    string stakeholders;     
};


int main() {
    Cause causes[50] = {
        {"Lack of Skills", "Extreme", 38, "Government, Individuals"},
        {"Poor Education Quality", "High", 42, "Government"},
        {"Skill Mismatch", "High", 35, "Government, Private Sector"},
        {"Low Industrial Growth", "Medium", 25, "Government, Private Sector"},
        {"Population Growth", "Medium", 28, "Government, Individuals"},
        {"Lack of Experience", "Low", 15, "Private Sector, Individuals"},
        {"Technological Gap", "Medium", 22, "Private Sector, Government"},
        {"Insufficient Training Programs", "High", 33, "Government, Education Institutions"},
        {"Corruption", "Medium", 20, "Government"},
        {"Political Instability", "Medium", 24, "Government"},
        {"Limited Private Investment", "Medium", 26, "Private Sector, Government"},
        {"Rural Job Scarcity", "High", 31, "Government, Private Sector"},
        {"Urban Migration Pressure", "Medium", 27, "Government"},
        {"Gender Discrimination", "Low", 12, "Government, Private Sector"},
        {"Lack of Career Guidance", "Medium", 23, "Education Institutions, Individuals"},
        {"Outdated Curriculum", "High", 34, "Government, Education Institutions"},
        {"Weak SME Sector", "Medium", 21, "Private Sector, Government"},
        {"Global Economic Slowdown", "Low", 14, "Government"},
        {"Automation Risk", "Low", 10, "Private Sector, Individuals"},
        {"Poor Infrastructure", "Medium", 19, "Government"}
    };

    int totalCauses = 20;

    // Unemployment statistics
    float nationalRate = 4.48;
    float youthRate    = 10.6;
    float maleRate     = 4.0;
    float femaleRate   = 5.0;
    float urbanRate    = 4.63;
    float ruralRate    = 4.1;

    int choice;

    do {
        cout << "\n===== Bangladesh Unemployment Info System =====\n";
        cout << "1. Display Causes\n";
        cout << "2. View Statistics\n";
        cout << "3. Cause Severity Index\n";
        cout << "4. Responsibility Tag\n";
        cout << "5. User Problem & Suggested Solution\n";
        cout << "6. Add New Cause\n";
        cout << "7. Exit\n";
        cout << "Enter your choice (1-7): ";
        cin >> choice;
        cin.ignore();

        switch (choice) {

        case 1:
            cout << "\n----- Major Causes of Unemployment -----\n";
            for (int i = 0; i < totalCauses; i++) {
                cout << i + 1 << ". " << causes[i].name << endl;
            }
            break;

        case 2:
            cout << "\n----- Unemployment Statistics (BBS) -----\n";
            cout << "National unemployment rate: " << nationalRate << "%\n";
            cout << "Youth unemployment rate: "    << youthRate    << "%\n";
            cout << "Male unemployment rate: "     << maleRate     << "%\n";
            cout << "Female unemployment rate: "   << femaleRate   << "%\n";
            cout << "Urban unemployment rate: "    << urbanRate    << "%\n";
            cout << "Rural unemployment rate: "    << ruralRate    << "%\n";
            break;

        case 3: {
            int index;
            cout << "\nSelect a cause number (1-" << totalCauses << "): ";
            cin >> index;
            cin.ignore();

            if (index >= 1 && index <= totalCauses) {
                Cause c = causes[index - 1];
                cout << "\n----- Cause Severity Index -----\n";
                cout << "Cause: " << c.name << endl;
                cout << "Impact Level: " << c.impact << endl;
                cout << "Affected Population: " << c.affectedPercent << "%\n";
            } else {
                cout << "Invalid choice!\n";
            }
            break;
        }

        case 4: {
            int index;
            cout << "\nSelect a cause number (1-" << totalCauses << "): ";
            cin >> index;
            cin.ignore();

            if (index >= 1 && index <= totalCauses) {
                Cause c = causes[index - 1];
                cout << "\n----- Responsibility Tag -----\n";
                cout << "Cause: " << c.name << endl;
                cout << "Responsible Stakeholders: " << c.stakeholders << endl;
            } else {
                cout << "Invalid choice!\n";
            }
            break;
        }

        case 5: {
    int problemChoice;
    cout << "\nSelect a problem number (1-" << totalCauses << "):\n";
    for (int i = 0; i < totalCauses; i++) {
        cout << i + 1 << ". " << causes[i].name << endl;
    }

    cout << "Enter choice: ";
    cin >> problemChoice;
    cin.ignore();

    cout << "\n----- Suggested Solution -----\n";

    if (problemChoice == 1)
        cout << "Introduce market-oriented skill development programs and technical training.\n";

    else if (problemChoice == 2)
        cout << "Improve education quality by updating curriculum and training teachers.\n";

    else if (problemChoice == 3)
        cout << "Align academic curriculum with industry requirements.\n";

    else if (problemChoice == 4)
        cout << "Encourage industrial investment and support manufacturing sectors.\n";

    else if (problemChoice == 5)
        cout << "Implement population control policies and awareness programs.\n";

    else if (problemChoice == 6)
        cout << "Create internship and apprenticeship opportunities for fresh graduates.\n";

    else if (problemChoice == 7)
        cout << "Provide affordable access to modern technology and IT training.\n";

    else if (problemChoice == 8)
        cout << "Increase government-funded vocational and professional training programs.\n";

    else if (problemChoice == 9)
        cout << "Ensure transparency and strict anti-corruption enforcement.\n";

    else if (problemChoice == 10)
        cout << "Maintain political stability to attract investment and job creation.\n";

    else if (problemChoice == 11)
        cout << "Offer incentives to private investors and SMEs.\n";

    else if (problemChoice == 12)
        cout << "Create employment opportunities in rural areas.\n";

    else if (problemChoice == 13)
        cout << "Develop planned urbanization and decentralize industries.\n";

    else if (problemChoice == 14)
        cout << "Ensure equal employment rights for women.\n";

    else if (problemChoice == 15)
        cout << "Introduce career counseling in schools and universities.\n";

    else if (problemChoice == 16)
        cout << "Update curriculum regularly based on job market demand.\n";

    else if (problemChoice == 17)
        cout << "Support small and medium enterprises with loans and training.\n";

    else if (problemChoice == 18)
        cout << "Develop export-oriented industries to handle global slowdown.\n";

    else if (problemChoice == 19)
        cout << "Reskill workers to adapt with automation and AI.\n";

    else if (problemChoice == 20)
        cout << "Improve national infrastructure to attract industries.\n";

    else
        cout << "Invalid choice!\n";

    break;
}


        case 6:
            if (totalCauses < 50) {
                cout << "\nEnter new cause: ";
                getline(cin, causes[totalCauses].name);

                causes[totalCauses].impact = "Not analyzed yet";
                causes[totalCauses].affectedPercent = -1;
                causes[totalCauses].stakeholders = "Not assigned yet";

                totalCauses++;
                cout << "Cause added successfully!\n";
            } else {
                cout << "Cause list is full.\n";
            }
            break;

        case 7:
            cout << "\nThank you for using the system.\n";
            break;

        default:
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 7);

    return 0;
}
