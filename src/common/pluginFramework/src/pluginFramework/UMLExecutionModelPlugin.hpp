/*
 * MDE4CPPPlugin.hpp
 *
 *  Created on: 21.06.2017
 *      Author: Alexander Wichmann
 */

#ifndef PLUGINFRAMEWORK_UMLEXECUTIONMODELPLUGIN_HPP
#define PLUGINFRAMEWORK_UMLEXECUTIONMODELPLUGIN_HPP

#include <memory>
#include <vector>

#include "pluginFramework/MDE4CPPPlugin.hpp"

class AnyObject;
typedef std::shared_ptr<AnyObject> Any;

namespace uml
{
	class Activity;
	class Element;
}

class UMLExecutionModelPlugin: public MDE4CPPPlugin
{
	public:
		virtual ~UMLExecutionModelPlugin(){}

		virtual Any executeActivity(std::shared_ptr<uml::Activity> activity, std::shared_ptr<std::vector<Any>> parameterList, std::shared_ptr<uml::Element> element = nullptr) = 0;
};

#endif
