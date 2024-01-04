#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
struct Task {
    string description;
    bool completed;
};
void addTask(vector<Task>& taskList, const string& description);
void viewTasks(const vector<Task>& taskList);
void markTaskAsCompleted(vector<Task>& taskList, int taskIndex);
void removeTask(vector<Task>& taskList, int taskIndex);
int main() {
    vector<Task> taskList;
    int choice;
	do {
        cout << "\n=== To-Do List Manager ===" << endl;
        cout << "1. Add Task\n2. View Tasks\n3. Mark Task as Completed\n4. Remove Task\n0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
		switch (choice) {
            case 1: {
                string description;
                cout << "Enter task description: ";
                cin.ignore(); // Ignore newline character left in the buffer
                getline(cin, description);
                addTask(taskList, description);
                break;
            }
            case 2:
                viewTasks(taskList);
                break;
            case 3: {
                int taskIndex;
                cout << "Enter task index to mark as completed: ";
                cin >> taskIndex;
                markTaskAsCompleted(taskList, taskIndex);
                break;
				}
            case 4: {
                int taskIndex;
                cout << "Enter task index to remove: ";
                cin >> taskIndex;
                removeTask(taskList, taskIndex);
                break;
				}
            case 0:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
				}
				} while (choice != 0);
		 return 0;
}
void addTask(vector<Task>& taskList, const string& description) {
    Task newTask = {description, false};
    taskList.push_back(newTask);
    cout << "Task added successfully!\n";
}
void viewTasks(const vector<Task>& taskList) {
    if (taskList.empty()) {
        cout << "No tasks to display.\n";
    } else {
        cout << "\n=== Task List ===\n";
        cout << setw(5) << "Index" << setw(30) << "Description" << setw(15) << "Status" << endl;
        cout << "----------------------------------------\n";
        for (size_t i = 0; i < taskList.size(); ++i) {
            cout << setw(5) << i << setw(30) << taskList[i].description;
            if (taskList[i].completed) {
                cout << setw(15) << "Completed";
            } else {
                cout << setw(15) << "Incomplete";
            }
            cout << endl;
        }
		}
		}
void markTaskAsCompleted(vector<Task>& taskList, int taskIndex) {
    if (taskIndex >= 0 && static_cast<size_t>(taskIndex) < taskList.size()) {
        taskList[taskIndex].completed = true;
        cout << "Task marked as completed.\n";
    } else {
        cout << "Invalid task index. Please try again.\n";
    }
	}
void removeTask(vector<Task>& taskList, int taskIndex) {
    if (taskIndex >= 0 && static_cast<size_t>(taskIndex) < taskList.size()) {
        taskList.erase(taskList.begin() + taskIndex);
        cout << "Task removed successfully.\n";
    } else {
        cout << "Invalid task index. Please try again.\n";}
		}

