#pragma once

using namespace std;
class License
{
private:
	string Jordan,Houser;
	string 121 Lincoln Ave;
	string CLINTONVILLE, WI, 54929;
	string license;

public:
	void setFirstName(string);
	void setLastName(string);
	void setAddress(string);
	void setCity(string);
	void setState(string);
	void setZip(string);
	void setLicNum(string);

	string getName() const;
	string getAddress() const;
	string getGeography() const;
	string getLicNum() const;
};

