--- third_party/swiftshader/src/Main/SwiftConfig.cpp.orig	2020-11-13 06:42:23 UTC
+++ third_party/swiftshader/src/Main/SwiftConfig.cpp
@@ -764,7 +764,11 @@ namespace sw
 		struct stat status;
 		int lastModified = ini.getInteger("LastModified", "Time", 0);
 
+#if !defined(__FreeBSD__)
 		bool noConfig = stat("SwiftShader.ini", &status) != 0;
+#else
+               bool noConfig = false;
+#endif
 		newConfig = !noConfig && abs((int)status.st_mtime - lastModified) > 1;
 
 		if(disableServerOverride)
