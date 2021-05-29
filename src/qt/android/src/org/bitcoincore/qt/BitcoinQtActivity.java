package org.garliccoincore.qt;

import android.os.Bundle;
import android.system.ErrnoException;
import android.system.Os;

import org.qtproject.qt5.android.bindings.QtActivity;

import java.io.File;

public class GarliccoinQtActivity extends QtActivity
{
    @Override
    public void onCreate(Bundle savedInstanceState)
    {
        final File garliccoinDir = new File(getFilesDir().getAbsolutePath() + "/.garliccoin");
        if (!garliccoinDir.exists()) {
            garliccoinDir.mkdir();
        }

        try {
            Os.setenv("QT_QPA_PLATFORM", "android", true);
        } catch (ErrnoException e) {
            e.printStackTrace();
        }

        super.onCreate(savedInstanceState);
    }
}
