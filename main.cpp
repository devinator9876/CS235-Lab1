#include <iostream>
#include "TodoList.h"

int main(int argc, char *argv[]) {
  TodoList *test = new TodoList();
  //test->printTodoList();
  test->printDaysTasks("Tuesday");
  delete test;
}
