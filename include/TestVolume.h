//////////////////////////////////////////////////////////////////////
/// \file TestVolume.h
/// \brief A class which describes a test volume
/// \author Douglas Davis < douglasdavis@utexas.edu >
//////////////////////////////////////////////////////////////////////

#ifndef TESTVOLUME_H
#define TESTVOLUME_H

#include <iostream>

namespace geo {

  class TestVolume {
    
  private:
    
    std::string fType;    ///< test volume type (box or sphere currently suppored)
    double      fRadius;  ///< sphere test volume radius
    double      fLength;  ///< box test volume length (x)
    double      fHeight;  ///< box test volume height (z)
    double      fWidth;   ///< box test volume width (y)
    double      fXO;      ///< test volume x center
    double      fYO;      ///< test volume y center
    double      fZO;      ///< test volume z center
    
  public:
    
    /// Default constructor
    TestVolume();

    /// Constructor for a sphere (type, radius)
    TestVolume(const std::string type, double radius);

    /// Constructor for a box (type, length, width, height)
    TestVolume(const std::string type, double length, double width, double height);

    /// virtual destructor
    virtual ~TestVolume();
    
    /// Set the origin of the test volume
    void SetOrigin(double x, double y, double z);

    inline double GetLength() const { return fLength; }
    inline double GetWidth()  const { return fWidth;  }
    inline double GetHeight() const { return fHeight; }
    inline double GetRadius() const { return fRadius; }    
    inline double GetXO()     const { return fXO;     }
    inline double GetYO()     const { return fYO;     }
    inline double GetZO()     const { return fZO;     }

  };

}

#endif