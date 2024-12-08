#include <iostream>
using namespace std;

class category;
class task;

vector<category>
    allCategories;
vector<task> allTasks;

class category
{
    string c;

public:
    category(string c)
    {
        this->c = c;
    }
    void listAllCategories()
    {
        for (auto &c : allCategories)
        {
            cout << c << " ";
        }
        cout << '\n';
    }
    void delete()
    {
        for (int i = 0; i < (int)allCategories.size(); i++)
        {
            if (allTasks[i] == *this)
            {
                allCategories.erase(allCategories.begin() + i);
                break;
            }
        }
        cout << "category not found !!!";
    }

}

class task
{
    string title;
    string description;
    category c;
    int priority;
    string dueDate;

public:
    task(string title, string description, category c, int priority, string dueDate)
    {
        this->title = title;
        this->description = description;
        this->category = c;
        this->p = p;
        this->dueDate = dueDate;
    }

    void update(string title, string description, category c, int priority, string dueDate)
    {
        if (title != this->title)
            this->title = title;
        if (description != this->description)
            this->description = description;
        if (c != this->c)
            this->category = category;
        if (priority != this->priority)
            this->priority = priority;
        if (dueDate != this->dueDate)
            this->dueDate = dueDate;
    }
    void delete()
    {
        for (int i = 0; i < (int)allTasks.size(); i++)
        {
            if (allTasks[i] == *this)
            {
                allTasks.erase(allTasks.erase(allTasks.begin() + i));
                return;
            }
        }
        cout << "Task not found !!";
    }
}

void
main()
{
    cout << "enter task category : ";
    string c;
    cin >> c;
    category cat = category(c);
    cout << "enter your task details : title, description, priority, dueDate";
    stirng t, des, date;
    cin >> t >> des;
    int p;
    cin >> p;
    cin >> date;
    task(t, des, cat, p, date);
}
