#include <iostream>
#include <string>
using namespace std;

int main()
{
    string task[20];
    bool done[20] = {false};
    int count = 0;
    int choice;

    do
    {
        cout << "\n----- TO-DO LIST -----\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Complete Task\n";
        cout << "4. Delete Task\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        if(choice == 1)
        {
            cout << "Enter task: ";
            getline(cin, task[count]);
            count++;
        }
        else if(choice == 2)
        {
            if(count == 0)
            {
                cout << "No tasks available.\n";
            }
            else
            {
                for(int i = 0; i < count; i++)
                {
                    cout << i + 1 << ". " << task[i];

                    if(done[i])
                        cout << " [Completed]";
                    else
                        cout << " [Pending]";

                    cout << endl;
                }
            }
        }
        else if(choice == 3)
        {
            int n;
            cout << "Enter task number: ";
            cin >> n;

            if(n >= 1 && n <= count)
                done[n - 1] = true;
            else
                cout << "Invalid task number.\n";
        }
        else if(choice == 4)
        {
            int n;
            cout << "Enter task number: ";
            cin >> n;

            if(n >= 1 && n <= count)
            {
                for(int i = n - 1; i < count - 1; i++)
                {
                    task[i] = task[i + 1];
                    done[i] = done[i + 1];
                }
                count--;
            }
            else
            {
                cout << "Invalid task number.\n";
            }
        }

    } while(choice != 5);

    cout << "Program Ended.\n";

    return 0;
}