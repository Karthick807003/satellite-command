#include <iostream>
#include <string>
using namespace std;

class Satellite {

private:
    string orientation;
    string status;
    int Datacollected;


public:
    // Constructor to initialize the satellite
    Satellite(const string& name="", string orientation="North", string status="Inactive",int Datacollected=0)
      {
      this->orientation=orientation;
      this->status=status;
      this->Datacollected=Datacollected;;
    }

    // Member function to set the status of the satellite
    void activatePanels() {
        status = "Active";
    }

    void deactivatePanels() {
        status = "Inactive";
    }

	void rotate(string orientation){
		this->orientation=orientation;
	}

    // Member function to increase collectData_ by 10 units
    void get_collectData() {
    	if(status=="Active")
        Datacollected+= 10;
    }

    // Member function to print satellite information
    void displayinfo()  {
          cout << "Orientation: " << orientation <<  endl; 
         cout << "Status: " << status <<  endl;
         cout << "Collected Data: " << Datacollected<< " units" <<  endl;
    }

};

int main() {
    // Create a Satellite object and initialize it
    Satellite s1("");
    // Set the status of the satellite
    s1.activatePanels();
    // Increase the collectData_ by 10 units
    s1.get_collectData();
	s1.rotate("South");
	s1.deactivatePanels();
	s1.get_collectData();

    // Print satellite information
    s1.displayinfo();

    return 0;
}
