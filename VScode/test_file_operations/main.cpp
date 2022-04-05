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
			{
				cout << "File not found !" << endl;
				break;
			}
			//else
			//cout << "File found successfully!" << endl;

			outfile << "<!DOCTYPE html>" << endl;
			outfile << "<html>" << endl;
			outfile << "<head>" << endl;
			outfile << "<meta http-equiv=\"refresh\" content=\"0.2\">" << endl;
			outfile << "</head>" << endl;
			outfile << "<body>" << endl;
			outfile << "<p7>&nbsp&nbsp&nbsp" << i << "<br></p7>" << endl;
			outfile << "<p7>KMPH</p7>" << endl;
			outfile << "</body>" << endl;
			outfile << "</html>" << endl;

			/*outfile << "<script>" << endl;
			outfile << "function autoRefresh() {" << endl;
			outfile << "window.location = window.location.href;}" << endl;
			outfile << "setInterval('autoRefresh()', 100);" << endl;
			outfile << "</script>" << endl;*/

			outfile.close();

			this_thread::sleep_for(std::chrono::milliseconds(200));
		}
	}

	return 0;
}