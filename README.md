SAMI Trials Objective-C/iOS SDK
==========================

This SDK helps you connect your iOS apps to SAMI Trials. It exposes a number of methods to easily execute REST API calls to SAMI Trials.

Prerequisites
-------------

 * Xcode
 * AFNetworking

Installation
---------------------

Drag the `samitrials` and `client` folders of SAMI Trials iOS SDK from the Finder window into your Xcode project. Make sure your project has dependency on AFNetworking library.

If your application also uses the core SAMI functionality, you will need to import the SAMI iOS SDK to your project. In this case, you must remove `client` folder from your project first and then import the SAMI iOS SDK from here: https://github.com/samsungsamiio/sami-ios. 

More about SAMI
---------------

If you are not familiar with SAMI we have extensive documentation at http://developer.samsungsami.io

The full SAMI API specification with examples can be found at http://developer.samsungsami.io/sami/api-spec.html

We blog about advanced sample applications at http://blog.samsungsami.io/

To create and manage your services and devices on SAMI visit developer portal at http://devportal.samsungsami.io

License and Copyright
---------------------

Licensed under the Apache License. See LICENSE.

Copyright (c) 2015 Samsung Electronics Co., Ltd.