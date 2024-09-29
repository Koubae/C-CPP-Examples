#include <cpr/cpr.h>
#include <iostream>


void request() {
	cpr::Response response = cpr::Get(
			cpr::Url{"https://httpbin.org/get"},
			cpr::Parameters{
					{"param1", "value"},
					{"param2", "value"},
					{"param3", "value"},

			});

	const int		  status_code		   = response.status_code;
	const std::string content_type		   = response.header["content-type"];
	const std::string response_body_string = response.text;

	std::cout << "status_code: " << status_code << "\n"
			  << "content_type: " << content_type << "\n"
			  << "body string: " << response_body_string << "\n";

	std::cout << "Press Enter to Continue";
	std::cin.ignore();
}


int main(const int _, char *argv[]) {
	std::cout << "Starting Script...\n";

	try {
		request();
	} catch (const std::exception &error) {
		std::cout << error.what() << std::endl;
		return 1;
	}

	return 0;
}
