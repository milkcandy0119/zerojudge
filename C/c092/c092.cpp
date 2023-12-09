#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.sync_with_stdio(false), cin.tie(0);
	const double root2 = sqrt(2);
	int timeCount = 0, buffer;
	double x, y;
	string input, direction;
	while (cin >> input, input != "END") {
		x = y = buffer = 0, direction = "";
		for (int i = 0; i != input.size(); i++)
			if (input[i] == ',' || input[i] == '.') {
				if (direction == "N")
					y += buffer;
				else if (direction == "NE")
					x += buffer / root2, y += buffer / root2;
				else if (direction == "E")
					x += buffer;
				else if (direction == "SE")
					x += buffer / root2, y -= buffer / root2;
				else if (direction == "S")
					y -= buffer;
				else if (direction == "SW")
					x -= buffer / root2, y -= buffer / root2;
				else if (direction == "W")
					x -= buffer;
				else
					x -= buffer / root2, y += buffer / root2;
				buffer = 0, direction = "";
			}
			else if ('0' <= input[i] && input[i] <= '9')
				buffer *= 10, buffer += int(input[i] - '0');
			else
				direction += input[i];
		if (timeCount++)
			cout << '\n';
		cout << "Map #" << timeCount << "\nThe treasure is located at (";
		cout << fixed << setprecision(3) << x << ',' << y << ").\n";
		cout << fixed << setprecision(3) << "The distance to the treasure is " << sqrt(x * x + y * y) << ".\n";
	}
}
