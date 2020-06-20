#include <
using namespace std;
int main()
{
    int n, marks[n];
    cout << "Enter the student marks: ";
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        for (int i = 0; i < i + 1; ++i)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    for (int i = 0; i < n; ++i)
    {
        cout << "The student's marks[" << i << "]= ";
        cin >> marks[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cout << "Mark of student[" << i << "] is: " << marks[i] << endl;
    }
    getch();
}