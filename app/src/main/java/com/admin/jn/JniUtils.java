package com.admin.jn;

/**
 * Created by Administrator on 2016/9/5 0005.
 */
public class JniUtils {

    static {
        System.loadLibrary("Jni");
    }

    public static native String getString();


}
