#include "ComputeEnvironment.h"

class DataCenter : public ComputeEnvironment {
  public:
    DataCenter(int location);
    
    ComputeEnvironment *GetSection(Side) const;
    void SetSection(Side, ComputeEnvironment *);
    
    virtual void Access();
    
  private:
    ComputeEnviroment *sections[100];
    int _location;
};
