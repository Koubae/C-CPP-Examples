#include <cpr/cpr.h>
#include <iostream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

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
	const json response_body_json = json::parse(response.text);

	std::cout << "status_code: " << status_code << "\n"
			  << "content_type: " << content_type << "\n"
			  << "TXT Body:" << response_body_string << "\n\n\n"
			  << "JSON Body: " << response_body_json << "\n\n";

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
