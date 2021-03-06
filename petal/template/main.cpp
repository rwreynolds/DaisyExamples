#include "daisy_petal.h"
//#include "daisysp.h" // Uncomment this if you want to use the DSP library.

using namespace daisy;

// Declare a local daisy_petal for hardware access
DaisyPetal hw;

// This runs at a fixed rate, to prepare audio samples
void callback(float *in, float *out, size_t size)
{
    // Audio is interleaved stereo by default
    for (size_t i = 0; i < size; i+=2)
    {
        out[i] = in[i]; // left
        out[i+1] = in[i+1]; // right
    }
}

int main(void)
{
    // Initialize Stuff Here
    hw.Init();
    hw.StartAudio(callback);
    while(1) 
    {
        // Do Stuff InfInitely Here
    }
}
