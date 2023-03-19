#pragma once
#include <string>
class User {
	std::string name_;
	const std::string login_;
	std::string password_;
	

public:
	User(const std::string& login, const std::string& password, const std::string& name)
		:name_(name), login_(login), password_(password) {
	}
	const std::string& GetUserName() const {
		return name_;
	}
	void SetUserName(const std::string& name) {
		name_ = name;
	}

	const std::string& GetUserLogin()const {
		
		return login_;
	}
	
	const std::string& GetUserPassword()const {
		return password_;

	}
	
	void SetUserPassword(const std::string& password) {
		 password_ = password;
	}

};