
#include <iostream>

using namespace std;

int
main ()
{
  int x = 0, sum = 0, total = 0;
  double grit = 0.0;

  total++;
  cout << "New ideas and projects sometimes distract me from previous ones" <<
    endl;
  cout <<
    "Not at all - 5; Not much - 4; Somewhat - 3; Mostly - 2; Very much  - 1:";
  cin >> x;
  sum += x;
  cout << "Setbacks don't discourage me. I don't give up easily." << endl;
  cin >> x;
  sum += x;
  cout << "I often set a goal but later choose to pursue a different one" <<
    endl;
  cin >> x;
  sum += x;
  cout << "I am a hard worker." << endl;
  cin >> x;
  sum += x;
  cout <<
    "I have difficulty maintaining my focus on projects that take more than a few months to complete."
    << endl;
  cin >> x;
  sum += x;
  cout << "I finish whatever I begin." << endl;
  cin >> x;
  sum += x;
  cout << "My interests change from year to year." << endl;
  cin >> x;
  sum += x;
  cout << "I am diligent. I never give up." << endl;
  cin >> x;
  sum += x;
  cout <<
    "I have been obsessed with a certain idea or project for a short time but later lost interest."
    << endl;
  cin >> x;
  sum += x;
  cout << "I have overcome setbacks to conquer an important challenge." <<
    endl;
  cin >> x;
  sum += x;

  grit = sum / total / 10;
  cout << "Your Grit Score is " << grit << endl;
  return 0;
}
