SAMI Trials Objective-C/iOS SDK
==========================

This SDK helps you connect your iOS apps to SAMI Trials. It exposes a number of methods to easily execute REST API calls to SAMI Trials.

Prerequisites
-------------

 * Xcode
 * AFNetworking

Installation
---------------------

Drag the `samitrials` folder of SAMI Trials iOS SDK from the Finder window into your Xcode project. Make sure your project has dependency on AFNetworking library.

If you also need to exercise the core SAMI functionality, you will need to import the SAMI iOS SDK available here: https://github.com/samsungsamiio/sami-ios . 

Note, there is a `client` folder in the SAMI Trials iOS SDK as well. If you do not import the core SAMI SDK, then you need to drage the `client` folder into your Xcode project as well.


More about SAMI
---------------

If you are not familiar with SAMI we have extensive documentation at http://developer.samsungsami.io

The full SAMI API specification with examples can be found at http://developer.samsungsami.io/sami/api-spec.html

To create and manage your services and devices on SAMI visit developer portal at http://devportal.samsungsami.io

Licence and Copyright
---------------------

Licensed under the Apache License. See LICENCE.

Copyright (c) 2014 Samsung Electronics Co., Ltd.
