#include <clients/rt/OnsetSlice.hpp>
#include <FluidMaxWrapper.hpp>


void ext_main(void *r)
{
  using namespace fluid::client;
  makeMaxWrapper<NRTOnsetSlice>("fluid.bufonsetslice~");
}
