#ifndef __SOMEMOREEXPERIMENTS__
#define __SOMEMOREEXPERIMENTS__

#include "IPlug_include_in_plug_hdr.h"

class SomeMoreExperiments : public IPlug
{
public:
  SomeMoreExperiments(IPlugInstanceInfo instanceInfo);
  ~SomeMoreExperiments();

  void Reset();
  void OnParamChange(int paramIdx);
  void ProcessDoubleReplacing(double** inputs, double** outputs, int nFrames);
  void ProcessMidiMsg(IMidiMsg* pMsg);

private:
  double mGain;
};

#endif
