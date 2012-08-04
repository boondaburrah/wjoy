//
//  WiimoteAccelerometerPart.h
//  Wiimote
//
//  Created by alxn1 on 03.08.12.
//  Copyright 2012 alxn1. All rights reserved.
//

#import "WiimotePart.h"

@interface WiimoteAccelerometerPart : WiimotePart
{
    @private
        BOOL        m_IsCalibrationDataReaded;

        double      m_Pitch;
        double      m_Roll;

        uint16_t    m_ZeroX;
        uint16_t    m_ZeroY;
        uint16_t    m_ZeroZ;

        uint16_t    m_1gX;
        uint16_t    m_1gY;
        uint16_t    m_1gZ;

        BOOL        m_IsEnabled;
}

- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)enabled;

- (double)pitch;
- (double)roll;

@end
