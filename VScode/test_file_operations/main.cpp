#include <fstream>
#include <iostream>
#include <chrono>
#include <thread>

using namespace std;


int main() {

	ofstream outfile;

	while (1) {
		for (int i = 0; i < 199; i++) {

			outfile.open("D:\\PROJECTS\\Project Harmony\\testhtml.htm");

			if (!outfile)
				cout << "File not found !" << endl;
			else
				cout << "File found successfully!" << endl;

			outfile << "<!DOCTYPE html>" << endl;
			outfile << "<html>" << endl;
			outfile << "<head>" << endl;
			outfile << "<meta http-equiv=\"refresh\" content=\"0.1\">" << endl;
			outfile << "</head>" << endl;
			outfile << "<body>" << endl;
			outfile << "<h1>" << i << "</h1>" << endl;
			outfile << "<h1>KMPH</h1>" << endl;
			outfile << "</body>" << endl;
			outfile << "</html>" << endl;

			/*outfile << "<script>" << endl;
			outfile << "function autoRefresh() {" << endl;
			outfile << "window.location = window.location.href;}" << endl;
			outfile << "setInterval('autoRefresh()', 100);" << endl;
			outfile << "</script>" << endl;*/

			outfile.close();

			this_thread::sleep_for(std::chrono::milliseconds(100));
		}
	}

	return 0;
}